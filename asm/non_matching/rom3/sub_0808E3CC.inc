	THUMB_FUNC_START sub_0808E3CC
sub_0808E3CC: @ 0x0808E3CC
	push {r4-r6,lr}
	ldr r4, _0808E448  @ =gRam
	ldr r1, _0808E44C  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0808E440
	ldr r2, _0808E450  @ =0x00000A02
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _0808E406
	bl sub_0813350C
	mov r0, #12
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0808E454  @ =0x00000998
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #30
	bhi _0808E406
	add r0, r0, #1
	strb r0, [r1]
_0808E406:
	ldr r5, _0808E448  @ =gRam
	ldr r1, _0808E450  @ =0x00000A02
	add r6, r5, r1
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _0808E440
	bl sub_0808E22C
	ldr r2, _0808E458  @ =0x0000051E
	add r0, r5, r2
	mov r1, #0
	strh r4, [r0]
	ldr r2, _0808E454  @ =0x00000998
	add r0, r5, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
	mov r0, #48
	strb r0, [r6]
	ldr r0, _0808E45C  @ =0x000009E8
	add r1, r5, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0808E440:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808E448:
	.4byte gRam
_0808E44C:
	.4byte 0x00000996
_0808E450:
	.4byte 0x00000A02
_0808E454:
	.4byte 0x00000998
_0808E458:
	.4byte 0x0000051E
_0808E45C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808E3CC

