	THUMB_FUNC_START sub_0808AB34
sub_0808AB34: @ 0x0808AB34
	push {r4,lr}
	ldr r1, _0808AB88  @ =gRam
	ldr r2, _0808AB8C  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #144
	beq _0808AB80
	ldr r0, _0808AB90  @ =gLamp
	ldrb r0, [r0]
	cmp r0, #0
	beq _0808AB80
	ldr r4, _0808AB94  @ =0x00000CF5
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0808AB80
	mov r0, #176
	lsl r0, r0, #4
	add r3, r1, r0
	ldrh r2, [r3]
	cmp r2, #0
	bne _0808AB80
	ldr r4, _0808AB98  @ =0x00000B02
	add r0, r1, r4
	ldrh r0, [r0]
	cmp r0, #0
	bne _0808AB80
	add r0, r2, #1
	strh r0, [r3]
	ldr r2, _0808AB9C  @ =0x00000ABA
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #2
	beq _0808AB80
	ldr r4, _0808ABA0  @ =0x000009B5
	add r1, r1, r4
	mov r0, #1
	strb r0, [r1]
_0808AB80:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808AB88:
	.4byte gRam
_0808AB8C:
	.4byte 0x000009DA
_0808AB90:
	.4byte gLamp
_0808AB94:
	.4byte 0x00000CF5
_0808AB98:
	.4byte 0x00000B02
_0808AB9C:
	.4byte 0x00000ABA
_0808ABA0:
	.4byte 0x000009B5
	THUMB_FUNC_END sub_0808AB34

