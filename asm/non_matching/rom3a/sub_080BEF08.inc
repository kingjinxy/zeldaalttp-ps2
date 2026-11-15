	THUMB_FUNC_START sub_080BEF08
sub_080BEF08: @ 0x080BEF08
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r1, _080BEFEC  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r0, r1, r2
	ldrb r5, [r0]
	sub r5, r5, #4
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r3, _080BEFF0  @ =0x00000961
	add r0, r1, r3
	ldrb r4, [r0]
	sub r4, r4, #4
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r2, _080BEFF4  @ =gUnknown_081717B8
	ldr r3, _080BEFF8  @ =0x00000DA4
	add r0, r1, r3
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r6, [r0]
	ldr r2, _080BEFFC  @ =gUnknown_081717BC
	ldr r0, _080BF000  @ =0x000015F0
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	mov r8, r0
	ldr r1, _080BF004  @ =gUnknown_03003E74
	mov r9, r1
	ldrh r0, [r1]
	ldr r7, _080BF008  @ =gUnknown_081717BF
	ldrb r1, [r7]
	add r3, r6, #0
	orr r3, r3, r1
	lsl r3, r3, #8
	mov r2, r8
	orr r3, r3, r2
	mov r1, #0
	str r1, [sp]
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C6004
	mov r2, r9
	ldrh r0, [r2]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r3, #8
	add r3, r3, r5
	mov r10, r3
	ldrb r1, [r7, #1]
	add r3, r6, #0
	orr r3, r3, r1
	lsl r3, r3, #8
	mov r1, r8
	orr r3, r3, r1
	mov r2, #0
	str r2, [sp]
	mov r1, r10
	add r2, r4, #0
	bl sub_080C6004
	mov r3, r9
	ldrh r0, [r3]
	add r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r4, r4, #8
	ldrb r1, [r7, #2]
	add r3, r6, #0
	orr r3, r3, r1
	lsl r3, r3, #8
	mov r1, r8
	orr r3, r3, r1
	mov r2, #0
	str r2, [sp]
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C6004
	mov r3, r9
	ldrh r0, [r3]
	add r0, r0, #3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrb r1, [r7, #3]
	orr r6, r6, r1
	lsl r6, r6, #8
	mov r1, r8
	orr r1, r1, r6
	mov r8, r1
	mov r2, #0
	str r2, [sp]
	mov r1, r10
	add r2, r4, #0
	mov r3, r8
	bl sub_080C6004
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BEFEC:
	.4byte gRam
_080BEFF0:
	.4byte 0x00000961
_080BEFF4:
	.4byte gUnknown_081717B8
_080BEFF8:
	.4byte 0x00000DA4
_080BEFFC:
	.4byte gUnknown_081717BC
_080BF000:
	.4byte 0x000015F0
_080BF004:
	.4byte gUnknown_03003E74
_080BF008:
	.4byte gUnknown_081717BF
	THUMB_FUNC_END sub_080BEF08

