	.syntax unified
	THUMB_FUNC_START sub_08005920
sub_08005920: @ 0X08005920
	push {lr}
	ldr r2, [pc, #664]
	ldrb r1, [r0, #21]
	lsls r1, r1, #2
	ldr r1, [r2, r1]
	bx r1
	.4byte _0800596C+1
	.4byte _080059EC+1
	.4byte _08005A70+1
	.4byte _080059A8+1
	.4byte _08005940+1
_08005940:
	ldr r2, [pc, #636]
	ldrh r2, [r2, #0]
	orrs r2, r2
	bne.n _08005950
	ldrb r2, [r0, #23]
	subs r2, #1
	strb r2, [r0, #23]
	bne.n _08005966
_08005950:
	bl 0x8001d5c
	ldrh r2, [r1, #54]
	ldr r3, [pc, #620]
	ands r3, r2
	strh r3, [r1, #54]
	eors r2, r2
	movs r3, #66
	strb r2, [r0, r3]
	bl 0x80012b4
_08005966:
	pop {pc}
	.syntax unified
	.thumb
