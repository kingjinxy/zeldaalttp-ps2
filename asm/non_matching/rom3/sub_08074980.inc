	THUMB_FUNC_START sub_08074980
sub_08074980: @ 0x08074980
	push {lr}
	bl sub_0808F184
	ldr r0, _08074994  @ =gRam
	ldr r1, _08074998  @ =0x000009AD
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	pop {r0}
	bx r0
_08074994:
	.4byte gRam
_08074998:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08074980

