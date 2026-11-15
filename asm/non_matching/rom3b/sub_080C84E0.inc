	THUMB_FUNC_START sub_080C84E0
sub_080C84E0: @ 0x080C84E0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C8560
	ldr r0, _080C8514  @ =gRam
	ldr r2, _080C8518  @ =0x00001AE2
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	beq _080C852A
	ldr r1, _080C851C  @ =0x000011C2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	ldr r2, _080C8520  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #9
	b _080C855E
_080C8514:
	.4byte gRam
_080C8518:
	.4byte 0x00001AE2
_080C851C:
	.4byte 0x000011C2
_080C8520:
	.4byte 0x00000FA2
_080C8524:
	sub r0, r2, r6
	add r2, r0, #2
	b _080C8550
_080C852A:
	ldr r1, _080C8568  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r2, _080C856C  @ =gUnknown_081724BA
	ldrb r1, [r2]
	add r0, r1, #0
	add r6, r2, #0
	cmp r0, #255
	beq _080C854C
_080C853E:
	cmp r3, r1
	beq _080C8524
	add r2, r2, #1
	ldrb r1, [r2]
	add r0, r1, #0
	cmp r0, #255
	bne _080C853E
_080C854C:
	mov r2, #1
	neg r2, r2
_080C8550:
	ldr r1, _080C8570  @ =0x000016B4
	add r0, r5, r1
	mov r1, #0
	strb r2, [r0]
	ldr r2, _080C8574  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
_080C855E:
	strb r1, [r0]
_080C8560:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C8568:
	.4byte 0x00000FF2
_080C856C:
	.4byte gUnknown_081724BA
_080C8570:
	.4byte 0x000016B4
_080C8574:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080C84E0

