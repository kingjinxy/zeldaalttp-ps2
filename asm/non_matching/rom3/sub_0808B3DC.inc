	THUMB_FUNC_START sub_0808B3DC
sub_0808B3DC: @ 0x0808B3DC
	push {lr}
	ldr r2, _0808B400  @ =gRam
	mov r0, #184
	lsl r0, r0, #5
	add r1, r2, r0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _0808B404  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0808B40C
	ldr r0, _0808B408  @ =0x000009AD
	add r1, r2, r0
	mov r0, #42
	b _0808B412
_0808B400:
	.4byte gRam
_0808B404:
	.4byte 0x000009B2
_0808B408:
	.4byte 0x000009AD
_0808B40C:
	ldr r0, _0808B42C  @ =0x000009AD
	add r1, r2, r0
	mov r0, #21
_0808B412:
	strb r0, [r1]
	ldr r1, _0808B430  @ =gMaxHealth
	ldrb r0, [r1]
	sub r0, r0, #8
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #167
	bls _0808B428
	mov r0, #0
	strb r0, [r1]
_0808B428:
	pop {r0}
	bx r0
_0808B42C:
	.4byte 0x000009AD
_0808B430:
	.4byte gMaxHealth
	THUMB_FUNC_END sub_0808B3DC

