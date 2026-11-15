	THUMB_FUNC_START sub_0806941C
sub_0806941C: @ 0x0806941C
	push {r4,lr}
	ldr r0, _08069448  @ =0x04000130
	ldrh r1, [r0]
	mvn r1, r1
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _0806944C  @ =gRam
	ldr r0, _08069450  @ =0x00000532
	add r4, r2, r0
	ldrh r3, [r4]
	add r0, r1, #0
	bic r0, r0, r3
	ldr r3, _08069454  @ =0x00000534
	add r2, r2, r3
	strh r0, [r2]
	strh r1, [r4]
	bl sub_0806995C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069448:
	.4byte 0x04000130
_0806944C:
	.4byte gRam
_08069450:
	.4byte 0x00000532
_08069454:
	.4byte 0x00000534
	THUMB_FUNC_END sub_0806941C

