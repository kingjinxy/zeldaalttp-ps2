	THUMB_FUNC_START sub_080EA310
sub_080EA310: @ 0x080EA310
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080EA334  @ =gRam
	ldr r1, _080EA338  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080EA33C
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	b _080EA342
_080EA334:
	.4byte gRam
_080EA338:
	.4byte 0x00000F52
_080EA33C:
	add r0, r4, #0
	bl sub_080EA1E8
_080EA342:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EA37C
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EA37C
	ldr r2, _080EA384  @ =gRam
	ldr r1, _080EA388  @ =0x00001172
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080EA38C  @ =gUnknown_08177CB0
	ldr r0, _080EA390  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EA37C:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080EA384:
	.4byte gRam
_080EA388:
	.4byte 0x00001172
_080EA38C:
	.4byte gUnknown_08177CB0
_080EA390:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EA310

