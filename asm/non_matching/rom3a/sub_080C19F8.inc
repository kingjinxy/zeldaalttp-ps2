	THUMB_FUNC_START sub_080C19F8
sub_080C19F8: @ 0x080C19F8
	push {r4-r6,lr}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080C1A68  @ =gRam
	ldr r3, _080C1A6C  @ =0x00000DCF
	add r2, r4, r3
	add r2, r0, r2
	ldrb r3, [r2]
	ldr r5, _080C1A70  @ =0x00000DE3
	add r2, r4, r5
	add r2, r0, r2
	ldrb r2, [r2]
	lsl r2, r2, #8
	add r3, r3, r2
	ldr r6, _080C1A74  @ =0x00000952
	add r2, r4, r6
	ldrh r2, [r2]
	sub r3, r3, r2
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r2, _080C1A78  @ =0xFFFF0000
	ldr r5, [sp]
	and r5, r5, r2
	orr r5, r5, r3
	str r5, [sp]
	ldr r3, _080C1A7C  @ =0x00000DC5
	add r2, r4, r3
	add r2, r0, r2
	ldrb r2, [r2]
	ldr r6, _080C1A80  @ =0x00000DD9
	add r3, r4, r6
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080C1A84  @ =0x00000958
	add r4, r4, r0
	ldrh r0, [r4]
	sub r2, r2, r0
	lsl r2, r2, #16
	ldr r0, _080C1A88  @ =0x0000FFFF
	and r0, r0, r5
	orr r0, r0, r2
	str r0, [sp]
	add r0, r1, #0
	mov r1, sp
	bl sub_0812A324
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C1A68:
	.4byte gRam
_080C1A6C:
	.4byte 0x00000DCF
_080C1A70:
	.4byte 0x00000DE3
_080C1A74:
	.4byte 0x00000952
_080C1A78:
	.4byte 0xFFFF0000
_080C1A7C:
	.4byte 0x00000DC5
_080C1A80:
	.4byte 0x00000DD9
_080C1A84:
	.4byte 0x00000958
_080C1A88:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_080C19F8

