	THUMB_FUNC_START sub_08126420
sub_08126420: @ 0x08126420
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	add r5, r1, #0
	mov r9, r2
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08126490  @ =gRam
	ldr r4, _08126494  @ =gUnknown_03000050
	add r1, r4, #0
	add r1, r1, #48
	add r1, r0, r1
	ldrb r1, [r1]
	mov r2, #150
	lsl r2, r2, #4
	add r7, r3, r2
	strb r1, [r7]
	add r1, r4, #0
	add r1, r1, #56
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r6, _08126498  @ =0x00000961
	add r1, r3, r6
	strb r2, [r1]
	add r1, r4, #0
	add r1, r1, #72
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r2, _0812649C  @ =0x00000964
	add r6, r3, r2
	strb r1, [r6]
	add r1, r4, #0
	add r1, r1, #80
	add r1, r0, r1
	ldrb r1, [r1]
	mov r8, r1
	add r2, r2, #1
	add r1, r3, r2
	mov r2, r8
	strb r2, [r1]
	add r1, r4, #0
	add r1, r1, #24
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r4, #0
	cmp r0, #2
	bhi _081264A0
	ldrh r0, [r7]
	sub r0, r0, #8
	strh r0, [r7]
	ldrh r0, [r6]
	sub r0, r0, #24
	b _081264AA
	.byte 0x00
	.byte 0x00
_08126490:
	.4byte gRam
_08126494:
	.4byte gUnknown_03000050
_08126498:
	.4byte 0x00000961
_0812649C:
	.4byte 0x00000964
_081264A0:
	ldrh r0, [r7]
	sub r0, r0, #8
	strh r0, [r7]
	ldrh r0, [r6]
	sub r0, r0, #48
_081264AA:
	strh r0, [r6]
	mov r6, r9
	cmp r6, #0
	beq _081264B6
	ldrh r4, [r1, #6]
	b _081264B8
_081264B6:
	ldrh r4, [r1, #4]
_081264B8:
	ldr r1, _0812651C  @ =0x0000096C
	add r0, r3, r1
	ldrh r6, [r0]
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	beq _08126510
	add r7, r3, #0
	ldr r3, _08126520  @ =0x00000964
	add r3, r3, r7
	mov r8, r3
_081264CE:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r7, r1
	ldrh r1, [r5]
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r5, #2]
	mov r3, r8
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r3, [r5, #4]
	ldrb r0, [r5, #5]
	lsl r0, r0, #8
	orr r3, r3, r0
	ldrb r0, [r5, #7]
	str r0, [sp]
	add r0, r4, #0
	bl sub_080C6368
	lsl r1, r6, #16
	ldr r6, _08126524  @ =0xFFFF0000
	add r1, r1, r6
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r5, r5, #8
	lsr r6, r1, #16
	cmp r1, #0
	bne _081264CE
_08126510:
	mov r0, r9
	cmp r0, #0
	beq _0812652C
	ldr r0, _08126528  @ =gUnknown_03000050
	strh r4, [r0, #6]
	b _08126530
_0812651C:
	.4byte 0x0000096C
_08126520:
	.4byte 0x00000964
_08126524:
	.4byte 0xFFFF0000
_08126528:
	.4byte gUnknown_03000050
_0812652C:
	ldr r0, _08126540  @ =gUnknown_03000050
	strh r4, [r0, #4]
_08126530:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126540:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126420

