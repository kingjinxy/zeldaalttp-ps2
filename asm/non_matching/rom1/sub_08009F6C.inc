	.syntax unified
	THUMB_FUNC_START sub_08009F6C
sub_08009F6C: @ 0X08009F6C
	push {r0, r1, lr}
	bl 0x800303c
	pop {r0, r2}
	ldrh r2, [r0, #50]
	ldr r3, [pc, #436]
	cmp r2, r3
	bcs.n _08009F82
	ldrh r2, [r0, #54]
	cmp r2, r3
	bcc.n _08009F88
_08009F82:
	ldr r1, [pc, #428]
	strh r1, [r0, #44]
	movs r1, #0
_08009F88:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xb5
	.byte 0x00
	.byte 0xf0
	.byte 0x2f
	.byte 0xf8
	.byte 0xff
	.byte 0xf7
	.byte 0xeb
	.byte 0xff
	.byte 0x08
	.byte 0x1c
	.byte 0x00
	.byte 0xbd
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
