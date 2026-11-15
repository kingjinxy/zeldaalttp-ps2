	THUMB_FUNC_START sub_0812B328
sub_0812B328: @ 0x0812B328
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r0, _0812B390  @ =gUnknown_03000168
	ldr r7, [r0]
	ldr r0, _0812B394  @ =gUnknown_03000160
	ldrb r0, [r0]
	cmp r0, #15
	bhi _0812B358
	ldr r2, _0812B398  @ =gUnknown_03000C1C
	ldr r0, _0812B39C  @ =gUnknown_03000175
	ldrb r0, [r0]
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #2
	sub r1, r1, r0
	lsl r1, r1, #6
	ldr r0, [r2]
	add r0, r0, r1
	ldr r1, _0812B3A0  @ =gUnknown_0300095C
	mov r2, #176
	bl CpuFastSet
_0812B358:
	mov r0, #0
	str r0, [sp]
	ldr r1, _0812B3A4  @ =gUnknown_0300069C
	ldr r2, _0812B3A8  @ =0x010000B0
	mov r0, sp
	bl CpuFastSet
_0812B366:
	cmp r7, #0
	beq _0812B40C
	add r4, r7, #0
	ldr r7, [r7, #108]
	add r0, r4, #0
	bl sub_0812B01C
	mov r8, r0
	ldrb r0, [r4, #1]
	cmp r0, #1
	bne _0812B3C8
	ldrh r0, [r4, #24]
	sub r0, r0, #1
	strh r0, [r4, #24]
	ldr r5, [r4, #4]
	ldrb r0, [r4, #27]
	cmp r0, #0
	beq _0812B3AC
	ldrb r3, [r4, #28]
	b _0812B3B2
	.byte 0x00
	.byte 0x00
_0812B390:
	.4byte gUnknown_03000168
_0812B394:
	.4byte gUnknown_03000160
_0812B398:
	.4byte gUnknown_03000C1C
_0812B39C:
	.4byte gUnknown_03000175
_0812B3A0:
	.4byte gUnknown_0300095C
_0812B3A4:
	.4byte gUnknown_0300069C
_0812B3A8:
	.4byte 0x010000B0
_0812B3AC:
	add r0, r5, #0
	add r0, r0, #75
	ldrb r3, [r0]
_0812B3B2:
	add r6, r3, #0
	add r0, r4, #0
	bl sub_0812B194
	add r2, r0, #0
	str r2, [r4, #16]
	add r0, r5, #0
	add r0, r0, #76
	ldrb r0, [r0]
	strb r0, [r4, #26]
	b _0812B3DA
_0812B3C8:
	mov r0, r8
	cmp r0, #0
	bne _0812B3D6
	add r0, r4, #0
	bl sub_0812BA6C
	b _0812B366
_0812B3D6:
	ldrb r6, [r4, #28]
	ldr r2, [r4, #16]
_0812B3DA:
	lsr r2, r2, #2
	ldr r0, [r4, #92]
	ldr r0, [r0, #4]
	mul r2, r0, r2
	add r0, r2, #0
	ldr r1, _0812B408  @ =0x00002910
	bl __udivsi3
	add r2, r0, #0
	lsr r2, r2, #5
	add r0, r4, #0
	mov r1, r8
	add r3, r6, #0
	bl sub_0812A964
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0812B366
	add r0, r4, #0
	bl sub_0812BA6C
	b _0812B366
_0812B408:
	.4byte 0x00002910
_0812B40C:
	mov r5, #0
	mov r4, #6
_0812B410:
	ldr r0, _0812B444  @ =gUnknown_03001760
	add r1, r5, r0
	ldrb r0, [r1, #1]
	cmp r0, #1
	bne _0812B426
	ldrh r0, [r1, #24]
	cmp r0, #0
	bne _0812B426
	add r0, r1, #0
	bl sub_0812B980
_0812B426:
	add r5, r5, #120
	sub r4, r4, #1
	cmp r4, #0
	bge _0812B410
	ldr r4, _0812B448  @ =gUnknown_03000177
	ldr r0, _0812B44C  @ =gUnknown_03000160
	ldrb r1, [r4]
	ldrb r2, [r0]
	add r3, r2, #0
	add r6, r0, #0
	cmp r1, r3
	bcs _0812B450
	sub r0, r2, #1
	b _0812B458
	.byte 0x00
	.byte 0x00
_0812B444:
	.4byte gUnknown_03001760
_0812B448:
	.4byte gUnknown_03000177
_0812B44C:
	.4byte gUnknown_03000160
_0812B450:
	ldrb r0, [r4]
	cmp r0, r3
	bls _0812B45A
	add r0, r2, #1
_0812B458:
	strb r0, [r6]
_0812B45A:
	ldrb r0, [r6]
	cmp r0, #15
	bls _0812B474
	ldr r0, _0812B470  @ =gUnknown_03000178
	ldrb r1, [r0]
	add r2, r0, #0
	cmp r1, #0
	beq _0812B4B6
	sub r0, r1, #1
	strb r0, [r2]
	b _0812B47E
_0812B470:
	.4byte gUnknown_03000178
_0812B474:
	ldr r0, _0812B4F8  @ =gUnknown_03000178
	ldr r1, _0812B4FC  @ =gUnknown_03000176
	ldrb r1, [r1]
	strb r1, [r0]
	add r2, r0, #0
_0812B47E:
	ldrb r0, [r2]
	cmp r0, #0
	beq _0812B4B6
	ldr r1, _0812B500  @ =gUnknown_030003D8
	ldr r0, _0812B504  @ =gUnknown_0300069C
	ldr r5, _0812B508  @ =gUnknown_0300095C
	mov r3, #176
	lsl r3, r3, #2
	add r2, r0, r3
	ldrb r3, [r6]
	ldr r4, [r1]
	add r1, r5, #0
	bl _call_via_r4
	ldr r2, _0812B50C  @ =gUnknown_03000C1C
	ldr r0, _0812B510  @ =gUnknown_03000175
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	sub r0, r0, r1
	lsl r0, r0, #6
	ldr r1, [r2]
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #176
	bl CpuFastSet
_0812B4B6:
	ldr r2, _0812B510  @ =gUnknown_03000175
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r1, _0812B4FC  @ =gUnknown_03000176
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0812B4CE
	mov r0, #0
	strb r0, [r2]
_0812B4CE:
	ldr r3, _0812B514  @ =gUnknown_030003D0
	ldr r0, _0812B504  @ =gUnknown_0300069C
	ldr r2, _0812B518  @ =gUnknown_03000140
	ldr r1, _0812B51C  @ =gUnknown_03000152
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	mov r4, #176
	lsl r4, r4, #2
	add r2, r0, r4
	ldr r3, [r3]
	bl _call_via_r3
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812B4F8:
	.4byte gUnknown_03000178
_0812B4FC:
	.4byte gUnknown_03000176
_0812B500:
	.4byte gUnknown_030003D8
_0812B504:
	.4byte gUnknown_0300069C
_0812B508:
	.4byte gUnknown_0300095C
_0812B50C:
	.4byte gUnknown_03000C1C
_0812B510:
	.4byte gUnknown_03000175
_0812B514:
	.4byte gUnknown_030003D0
_0812B518:
	.4byte gUnknown_03000140
_0812B51C:
	.4byte gUnknown_03000152
	THUMB_FUNC_END sub_0812B328

