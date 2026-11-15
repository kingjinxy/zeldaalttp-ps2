	THUMB_FUNC_START sub_080C8B88
sub_080C8B88: @ 0x080C8B88
	push {r4-r7,lr}
	sub sp, sp, #4
	add r6, r0, #0
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r0, _080C8BE8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080C8BEC  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	add r1, r1, #4
	ldr r3, _080C8BF0  @ =0x00000964
	add r2, r4, r3
	ldrb r2, [r2]
	add r2, r2, #4
	ldr r5, _080C8BF4  @ =gUnknown_08172530
	ldr r7, _080C8BF8  @ =0x00000FC2
	add r3, r4, r7
	add r3, r6, r3
	ldrb r3, [r3]
	lsr r3, r3, #2
	add r3, r3, r5
	ldrb r3, [r3]
	ldr r5, _080C8BFC  @ =0x00000969
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #48
	and r4, r4, r5
	mov r5, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	add r0, r6, #0
	mov r1, #0
	mov r2, #0
	bl sub_080C6350
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C8BE8:
	.4byte gUnknown_03003E74
_080C8BEC:
	.4byte gRam
_080C8BF0:
	.4byte 0x00000964
_080C8BF4:
	.4byte gUnknown_08172530
_080C8BF8:
	.4byte 0x00000FC2
_080C8BFC:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080C8B88

