	thumb_func_start sub_0800772C
sub_0800772C: @ 0x0800772C
	push {lr}
	push {r0, r1}
	mov r1, sl
	ldr r0, [r1, #0x28]
	ldrb r1, [r0, #0x1b]
	bl sub_080037EC
	pop {r0, r1}
	b _08007764
	.align 2, 0

