	THUMB_FUNC_START sub_080BD970
sub_080BD970: @ 0x080BD970
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	bl sub_080BDB54
	ldr r0, _080BD9B8  @ =gRam
	ldr r2, _080BD9BC  @ =0x00000FF2
	add r1, r0, r2
	mov r2, #185
	strb r2, [r1]
	ldr r1, _080BD9C0  @ =0x00000FF3
	add r0, r0, r1
	strb r2, [r0]
	mov r4, #1
_080BD98C:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	sub r4, r4, #1
	cmp r4, #0
	bge _080BD98C
	add r0, r5, #0
	bl sub_080B9454
	ldr r1, _080BD9B8  @ =gRam
	ldr r0, _080BD9C4  @ =0x00001053
	add r2, r1, r0
	mov r3, #0
	mov r0, #2
	strb r0, [r2]
	ldr r2, _080BD9C8  @ =0x00001083
	add r1, r1, r2
	strb r3, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_080BD9B8:
	.4byte gRam
_080BD9BC:
	.4byte 0x00000FF2
_080BD9C0:
	.4byte 0x00000FF3
_080BD9C4:
	.4byte 0x00001053
_080BD9C8:
	.4byte 0x00001083
	THUMB_FUNC_END sub_080BD970

