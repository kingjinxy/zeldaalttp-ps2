	THUMB_FUNC_START sub_080682EC
sub_080682EC: @ 0x080682EC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r6, _080683CC  @ =gRam
	ldr r0, _080683D0  @ =0x04000200
	mov r10, r0
	mov r1, #2
	add r1, sp, r1
	mov r8, r1
	mov r2, #128
	lsl r2, r2, #19
	mov r9, r2
	mov r0, #160
	lsl r0, r0, #3
	add r5, r6, r0
_08068310:
	bl sub_0806941C
	ldr r1, _080683D4  @ =0x00000985
	add r4, r6, r1
	ldrb r0, [r4]
	cmp r0, #0
	bne _0806832C
	ldr r2, _080683D8  @ =gUnknown_03002762
	ldrh r1, [r2]
	ldr r2, _080683DC  @ =0x000003FF
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #15
	beq _080683F8
_0806832C:
	ldr r0, _080683E0  @ =0x00000986
	add r7, r6, r0
	ldrb r0, [r4, #1]
	cmp r0, #0
	beq _0806837E
	mov r1, sp
	mov r2, r10
	ldrh r0, [r2]
	strh r0, [r1]
	mov r1, r9
	ldrh r0, [r1]
	mov r2, r8
	strh r0, [r2]
	mov r0, #128
	strh r0, [r1]
	ldr r1, _080683E4  @ =0x00008304
	add r0, r1, #0
	ldr r2, _080683E8  @ =0x04000132
	strh r0, [r2]
	mov r1, #192
	lsl r1, r1, #6
	add r0, r1, #0
	mov r2, r10
	strh r0, [r2]
	bl SoundBiasReset
	svc #3
	bl SoundBiasSet
	mov r0, sp
	ldrh r0, [r0]
	mov r1, r10
	strh r0, [r1]
	mov r1, #0
	ldr r2, _080683E8  @ =0x04000132
	strh r1, [r2]
	mov r2, r8
	ldrh r0, [r2]
	mov r2, r9
	strh r0, [r2]
	strb r1, [r7]
_0806837E:
	bl sub_080692D4
	ldr r1, _080683EC  @ =gUnknown_0814C804
	ldrb r0, [r4, #30]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	mov r0, #0
	strb r0, [r4, #18]
	ldrh r1, [r5]
	ldr r2, _080683F0  @ =0x0000FFFE
	add r0, r2, #0
	and r1, r1, r0
	ldrh r0, [r5]
	strh r1, [r5]
	mov r0, #160
	lsl r0, r0, #3
	add r2, r6, r0
	mov r3, #1
_080683A8:
	ldrh r1, [r2]
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080683A8
	ldrh r1, [r5]
	ldr r2, _080683F0  @ =0x0000FFFE
	add r0, r2, #0
	and r1, r1, r0
	ldrh r0, [r5]
	strh r1, [r5]
	ldr r1, _080683F4  @ =gUnknown_03002BBC
	ldrb r0, [r1]
	cmp r0, #0
	bne _08068310
	bl sub_08129E7C
	b _08068310
_080683CC:
	.4byte gRam
_080683D0:
	.4byte 0x04000200
_080683D4:
	.4byte 0x00000985
_080683D8:
	.4byte gUnknown_03002762
_080683DC:
	.4byte 0x000003FF
_080683E0:
	.4byte 0x00000986
_080683E4:
	.4byte 0x00008304
_080683E8:
	.4byte 0x04000132
_080683EC:
	.4byte gUnknown_0814C804
_080683F0:
	.4byte 0x0000FFFE
_080683F4:
	.4byte gUnknown_03002BBC
_080683F8:
	mov r0, #255
	bl SoftReset
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080682EC

	.byte 0x00
	.byte 0x00
