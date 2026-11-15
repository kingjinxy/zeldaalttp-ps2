	.syntax unified
	THUMB_FUNC_START sub_08003B64
sub_08003B64: @ 0X08003B64
	push {r0, lr}
	bl sub_08003AC0
	cmp r0, #0
	beq.n _08003B82
	subs r0, #1
	lsls r0, r0, #2
	ldr r1, [pc, #792]
	ldr r1, [r1, r0]
	ldr r2, [pc, #792]
	mov lr, r2
	pop {r0}
	bx r1
	.byte 0x01
	.byte 0x20
	.byte 0x00
	.byte 0xbd
_08003B82:
	movs r0, #0
	pop {r1, pc}
	.byte 0x00
	.byte 0x00
	.byte 0x49
	.byte 0x3a
	.byte 0x00
	.byte 0x08
	.byte 0x41
	.byte 0x3a
	.byte 0x00
	.byte 0x08
	.byte 0x45
	.byte 0x3a
	.byte 0x00
	.byte 0x08
	.syntax unified
	.thumb
