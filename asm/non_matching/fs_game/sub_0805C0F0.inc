	THUMB_FUNC_START sub_0805C0F0
sub_0805C0F0: @ 0x0805C0F0
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #252
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	bl 0x08003B94
	ldr r0, _0805C1E0  @ =gUnknown_03000488
	ldr r1, _0805C1E0  @ =gUnknown_03000488
	ldrh r2, [r1, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #128
	lsl r4, r4, #2
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strh r3, [r1, #2]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0805C1E0  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _0805C1E0  @ =gUnknown_03000488
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803D770
	ldr r0, [r7]
	ldrh r1, [r0, #58]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	mov r0, #27
	bl load_palette_from_gfx_group
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0805C1E4
	ldr r0, [r7]
	mov r1, #0
	mov r2, #3
	bl 0x08003840
	mov r0, #25
	bl play_sound
	b _0805C1EC
	.byte 0x00
	.byte 0x00
_0805C1E0:
	.4byte gUnknown_03000488
_0805C1E4:
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
_0805C1EC:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805C0F0

