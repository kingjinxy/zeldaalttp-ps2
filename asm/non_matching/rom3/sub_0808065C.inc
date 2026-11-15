	THUMB_FUNC_START sub_0808065C
sub_0808065C: @ 0x0808065C
	push {lr}
	ldr r0, _08080678  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r0, r0, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	ldr r1, _0808067C  @ =gUnknown_08165B4C
	mov r2, #5
	bl sub_0807BC4C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08080678:
	.4byte gRam
_0808067C:
	.4byte gUnknown_08165B4C
	THUMB_FUNC_END sub_0808065C

