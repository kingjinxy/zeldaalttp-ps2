	THUMB_FUNC_START sub_080142F4
sub_080142F4: @ 0x080142F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	add r4, r2, #0
	lsl r1, r1, #24
	lsr r5, r1, #24
	ldr r0, _08014358  @ =gUnknown_03005AD8
	ldrb r0, [r0]
	cmp r0, #112
	bls _0801430C
	b _08014460
_0801430C:
	add r0, r6, #0
	bl sub_080093A4
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801431A
	b _08014460
_0801431A:
	cmp r4, #0
	bne _08014320
	b _08014460
_08014320:
	bl sub_0800099C
	mov r1, #255
	and r1, r1, r0
	ldr r0, _0801435C  @ =gUnknown_0842AA44
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r1, r0
	bcc _08014334
	b _08014460
_08014334:
	add r0, r4, #0
	bl sub_0800C004
	lsl r0, r0, #24
	cmp r0, #0
	beq _08014364
	ldrb r0, [r4, #8]
	cmp r0, #3
	beq _08014364
	ldrb r0, [r4, #10]
	cmp r0, #3
	bhi _08014364
	ldr r0, _08014360  @ =gUnknown_03006C80
	add r0, r0, #84
	ldrb r4, [r4, #10]
	add r0, r0, r4
	ldrb r4, [r0]
	b _08014366
_08014358:
	.4byte gUnknown_03005AD8
_0801435C:
	.4byte gUnknown_0842AA44
_08014360:
	.4byte gUnknown_03006C80
_08014364:
	mov r4, #5
_08014366:
	bl sub_0800099C
	ldr r2, _080143A4  @ =gUnknown_0842AA30
	lsl r1, r5, #2
	add r1, r1, r2
	ldr r2, _080143A8  @ =gUnknown_03006C80
	mov r12, r2
	ldrb r7, [r2, #1]
	ldr r2, [r1]
	lsl r1, r7, #2
	add r1, r1, r2
	ldr r2, [r1]
	lsl r1, r4, #2
	add r1, r1, r2
	mov r2, #31
	mov r8, r2
	and r0, r0, r2
	ldr r1, [r1]
	add r1, r1, r0
	ldrb r1, [r1]
	add r3, r1, #0
	lsl r0, r1, #2
	ldr r5, _080143AC  @ =gUnknown_08429A00
	add r2, r0, r5
	cmp r1, #17
	beq _080143F4
	cmp r1, #17
	bgt _080143B0
	cmp r1, #14
	beq _080143B6
	b _08014432
_080143A4:
	.4byte gUnknown_0842AA30
_080143A8:
	.4byte gUnknown_03006C80
_080143AC:
	.4byte gUnknown_08429A00
_080143B0:
	cmp r3, #18
	beq _08014414
	b _08014432
_080143B6:
	bl sub_080123E8
	add r4, r0, #0
	cmp r4, #0
	beq _08014460
	mov r0, #8
	strb r0, [r4, #8]
	mov r0, #4
	strb r0, [r4, #9]
	mov r0, #255
	strb r0, [r4, #10]
	add r0, r6, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldrh r0, [r6, #50]
	strh r0, [r4, #50]
	ldrh r0, [r6, #54]
	strh r0, [r4, #54]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #2
	add r1, r4, #0
	bl sub_08012728
	b _08014460
_080143F4:
	ldr r0, _08014410  @ =gUnknown_08429D2C
	add r0, r7, r0
	ldrb r4, [r0]
	bl sub_0800099C
	mov r1, r8
	and r0, r0, r1
	add r2, r5, #0
	add r2, r2, #24
	cmp r4, r0
	bcc _08014432
	add r2, r2, #28
	b _08014432
	.byte 0x00
	.byte 0x00
_08014410:
	.4byte gUnknown_08429D2C
_08014414:
	ldr r1, _0801446C  @ =gUnknown_0842AA49
	mov r0, r12
	add r0, r0, #77
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r4, [r0]
	bl sub_0800099C
	mov r2, r8
	and r0, r0, r2
	add r2, r5, #0
	add r2, r2, #28
	cmp r4, r0
	bcc _08014432
	add r2, r2, #4
_08014432:
	ldrb r0, [r2]
	ldrb r1, [r2, #1]
	ldrb r2, [r2, #2]
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08014460
	ldrh r0, [r6, #50]
	strh r0, [r4, #50]
	ldrh r0, [r6, #54]
	strh r0, [r4, #54]
	add r0, r6, #0
	add r0, r0, #80
	ldrh r1, [r0]
	ldr r0, _08014470  @ =0x0000CFFF
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #80
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08008DD8
_08014460:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801446C:
	.4byte gUnknown_0842AA49
_08014470:
	.4byte 0x0000CFFF
	THUMB_FUNC_END sub_080142F4

