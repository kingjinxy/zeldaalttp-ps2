	THUMB_FUNC_START sub_0809E600
sub_0809E600: @ 0x0809E600
	push {lr}
	ldr r0, _0809E61C  @ =gRam
	ldr r1, _0809E620  @ =0x000009B2
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0809E616
	bl sub_0808B1FC
_0809E616:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809E61C:
	.4byte gRam
_0809E620:
	.4byte 0x000009B2
	THUMB_FUNC_END sub_0809E600

