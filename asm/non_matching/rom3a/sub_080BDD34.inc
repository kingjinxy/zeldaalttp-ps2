	THUMB_FUNC_START sub_080BDD34
sub_080BDD34: @ 0x080BDD34
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080BDD64  @ =gRam
	ldr r1, _080BDD68  @ =0x00001126
	add r3, r2, r1
	mov r1, #121
	strb r1, [r3]
	ldr r1, _080BDD6C  @ =0x00001127
	add r3, r2, r1
	mov r1, #57
	strb r1, [r3]
	ldr r1, _080BDD70  @ =0x00000FB3
	add r3, r2, r1
	mov r1, #1
	strb r1, [r3]
	ldr r1, _080BDD74  @ =0x00000F63
	add r2, r2, r1
	mov r1, #4
	strb r1, [r2]
	bl sub_080B9584
	pop {r0}
	bx r0
_080BDD64:
	.4byte gRam
_080BDD68:
	.4byte 0x00001126
_080BDD6C:
	.4byte 0x00001127
_080BDD70:
	.4byte 0x00000FB3
_080BDD74:
	.4byte 0x00000F63
	THUMB_FUNC_END sub_080BDD34

