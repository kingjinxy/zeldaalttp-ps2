	THUMB_FUNC_START sub_0808B370
sub_0808B370: @ 0x0808B370
	push {lr}
	ldr r2, _0808B3B4  @ =gRam
	ldr r0, _0808B3B8  @ =0x0000176C
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0808B386
	ldr r0, _0808B3BC  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	bne _0808B3D4
_0808B386:
	ldr r0, _0808B3C0  @ =gMoonPearl
	ldrb r0, [r0]
	cmp r0, #0
	beq _0808B392
	mov r0, #0
	strb r0, [r1]
_0808B392:
	mov r0, #184
	lsl r0, r0, #5
	add r1, r2, r0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _0808B3C4  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0808B3CC
	ldr r0, _0808B3C8  @ =0x000009AD
	add r1, r2, r0
	mov r0, #42
	b _0808B3D2
	.byte 0x00
	.byte 0x00
_0808B3B4:
	.4byte gRam
_0808B3B8:
	.4byte 0x0000176C
_0808B3BC:
	.4byte gFlippers
_0808B3C0:
	.4byte gMoonPearl
_0808B3C4:
	.4byte 0x000009B2
_0808B3C8:
	.4byte 0x000009AD
_0808B3CC:
	ldr r0, _0808B3D8  @ =0x000009AD
	add r1, r2, r0
	mov r0, #21
_0808B3D2:
	strb r0, [r1]
_0808B3D4:
	pop {r0}
	bx r0
_0808B3D8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0808B370

