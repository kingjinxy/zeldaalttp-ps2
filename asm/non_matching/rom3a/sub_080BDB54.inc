	THUMB_FUNC_START sub_080BDB54
sub_080BDB54: @ 0x080BDB54
	push {r4,lr}
	mov r1, #15
	ldr r3, _080BDB84  @ =gUnknown_030031D2
	mov r2, #0
	add r4, r3, #0
	add r4, r4, #80
_080BDB60:
	add r0, r1, r3
	strb r2, [r0]
	add r0, r1, r4
	strb r2, [r0]
	sub r1, r1, #1
	cmp r1, #0
	bge _080BDB60
	mov r1, #29
	ldr r3, _080BDB88  @ =gUnknown_03003402
	mov r2, #0
_080BDB74:
	add r0, r1, r3
	strb r2, [r0]
	sub r1, r1, #1
	cmp r1, #0
	bge _080BDB74
	pop {r4}
	pop {r0}
	bx r0
_080BDB84:
	.4byte gUnknown_030031D2
_080BDB88:
	.4byte gUnknown_03003402
	THUMB_FUNC_END sub_080BDB54

