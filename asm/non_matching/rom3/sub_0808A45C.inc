	THUMB_FUNC_START sub_0808A45C
sub_0808A45C: @ 0x0808A45C
	push {r4-r6,lr}
	ldr r2, _0808A4C0  @ =gRam
	ldr r1, _0808A4C4  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0808A4B6
	mov r3, #162
	lsl r3, r3, #4
	add r0, r2, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _0808A4B6
	mov r4, #0
	add r5, r2, #0
	mov r0, #190
	lsl r0, r0, #5
	add r6, r5, r0
_0808A484:
	lsl r0, r4, #1
	ldr r2, _0808A4C8  @ =0x0000193C
	add r1, r5, r2
	add r1, r0, r1
	ldrh r2, [r1]
	mov r3, #0
	ldrsh r0, [r1, r3]
	cmp r0, #0
	beq _0808A4B0
	sub r0, r2, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0808A4B0
	mov r0, #64
	neg r0, r0
	add r1, r0, #0
	add r0, r4, #0
	orr r0, r0, r1
	strb r0, [r6]
	bl sub_0808A334
_0808A4B0:
	add r4, r4, #1
	cmp r4, #8
	bne _0808A484
_0808A4B6:
	bl sub_08086B3C
	pop {r4-r6}
	pop {r0}
	bx r0
_0808A4C0:
	.4byte gRam
_0808A4C4:
	.4byte 0x00000996
_0808A4C8:
	.4byte 0x0000193C
	THUMB_FUNC_END sub_0808A45C

