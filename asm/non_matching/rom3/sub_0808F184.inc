	THUMB_FUNC_START sub_0808F184
sub_0808F184: @ 0x0808F184
	push {r4,lr}
	mov r0, #228
	lsl r0, r0, #3
	bl sub_08092568
	ldr r4, _0808F1B8  @ =gRam
	ldr r2, _0808F1BC  @ =0x0000096C
	add r1, r4, r2
	strh r0, [r1]
	ldr r0, _0808F1C0  @ =0x00000848
	add r2, r2, #16
	add r4, r4, r2
	strh r0, [r4]
	mov r2, #0
	ldrsh r0, [r1, r2]
	bl sub_080925A4
	bl sub_0813386C
	mov r1, #0
	ldrsh r0, [r4, r1]
	bl sub_0808C1B4
	pop {r4}
	pop {r0}
	bx r0
_0808F1B8:
	.4byte gRam
_0808F1BC:
	.4byte 0x0000096C
_0808F1C0:
	.4byte 0x00000848
	THUMB_FUNC_END sub_0808F184

