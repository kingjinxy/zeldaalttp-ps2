	THUMB_FUNC_START sub_0806BF60
sub_0806BF60: @ 0x0806BF60
	push {lr}
	bl sub_0808A738
	ldr r1, _0806BF78  @ =gRam
	ldr r0, _0806BF7C  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BF78:
	.4byte gRam
_0806BF7C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806BF60

