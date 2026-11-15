	THUMB_FUNC_START sub_080DD2D4
sub_080DD2D4: @ 0x080DD2D4
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080DD308  @ =gRam
	ldr r0, _080DD30C  @ =0x00001663
	add r1, r5, r0
	mov r6, #0
	mov r0, #4
	strb r0, [r1]
	add r0, r4, #0
	bl sub_081146A4
	mov r0, #5
	bl sub_080BE9A0
	ldr r0, _080DD310  @ =0x00000FA2
	add r5, r5, r0
	add r4, r4, r5
	strb r6, [r4]
	bl sub_0808B1FC
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD308:
	.4byte gRam
_080DD30C:
	.4byte 0x00001663
_080DD310:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080DD2D4

