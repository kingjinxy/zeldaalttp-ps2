	THUMB_FUNC_START sub_0808F120
sub_0808F120: @ 0x0808F120
	push {r4,r5,lr}
	ldr r4, _0808F144  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r4, r4, r0
	mov r0, #0
	ldrsh r5, [r4, r0]
	ldrh r0, [r4]
	add r0, r0, #8
	strh r0, [r4]
	bl sub_0808CA1C
	strh r5, [r4]
	bl sub_0808CBF4
	pop {r4,r5}
	pop {r1}
	bx r1
_0808F144:
	.4byte gRam
	THUMB_FUNC_END sub_0808F120

