	THUMB_FUNC_START sub_080D25C8
sub_080D25C8: @ 0x080D25C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D2632
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080D2638  @ =gRam
	ldr r2, _080D263C  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _080D2604
	ldr r3, _080D2640  @ =0x00000FA2
	add r0, r1, r3
	add r0, r4, r0
	strb r2, [r0]
_080D2604:
	ldr r4, _080D2644  @ =0x00000996
	add r0, r1, r4
	ldrb r4, [r0]
	mov r0, #1
	and r0, r0, r4
	cmp r0, #0
	bne _080D2632
	ldr r0, _080D2648  @ =0x00000F22
	add r2, r1, r0
	add r2, r5, r2
	ldr r3, _080D264C  @ =gUnknown_08174D2C
	lsr r0, r4, #5
	ldr r4, _080D2650  @ =0x000015DC
	add r1, r1, r4
	ldrb r1, [r1]
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
_080D2632:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D2638:
	.4byte gRam
_080D263C:
	.4byte 0x00000FC2
_080D2640:
	.4byte 0x00000FA2
_080D2644:
	.4byte 0x00000996
_080D2648:
	.4byte 0x00000F22
_080D264C:
	.4byte gUnknown_08174D2C
_080D2650:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080D25C8

