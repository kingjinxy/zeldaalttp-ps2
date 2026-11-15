	THUMB_FUNC_START sub_0808A0CC
sub_0808A0CC: @ 0x0808A0CC
	push {lr}
	ldr r1, _0808A0FC  @ =gRam
	ldr r0, _0808A100  @ =0x00000974
	add r2, r1, r0
	mov r3, #0
	mov r0, #4
	strh r0, [r2]
	ldr r0, _0808A104  @ =0x0000096C
	add r2, r1, r0
	strh r3, [r2]
	add r0, r0, #4
	add r1, r1, r0
	ldrh r1, [r1]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #57
	ble _0808A0F2
	mov r0, #1
	strh r0, [r2]
_0808A0F2:
	bl sub_0808716C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A0FC:
	.4byte gRam
_0808A100:
	.4byte 0x00000974
_0808A104:
	.4byte 0x0000096C
	THUMB_FUNC_END sub_0808A0CC

