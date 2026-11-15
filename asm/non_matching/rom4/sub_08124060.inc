	THUMB_FUNC_START sub_08124060
sub_08124060: @ 0x08124060
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _081240B4  @ =gRam
	ldr r1, _081240B8  @ =0x000009AD
	add r0, r4, r1
	ldrb r6, [r0]
	cmp r6, #0
	bne _081240CC
	ldr r2, _081240BC  @ =0x00000E29
	add r0, r4, r2
	add r0, r5, r0
	ldrb r2, [r0]
	add r2, r2, #2
	strb r2, [r0]
	ldr r3, _081240C0  @ =0x00000DED
	add r1, r4, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_080C1768
	ldr r7, _081240C4  @ =gUnknown_020030C0
	add r1, r5, r7
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _081240CC
	ldr r1, _081240C8  @ =0x00000E15
	add r0, r4, r1
	add r0, r5, r0
	strb r6, [r0]
	b _08124156
	.byte 0x00
	.byte 0x00
_081240B4:
	.4byte gRam
_081240B8:
	.4byte 0x000009AD
_081240BC:
	.4byte 0x00000E29
_081240C0:
	.4byte 0x00000DED
_081240C4:
	.4byte gUnknown_020030C0
_081240C8:
	.4byte 0x00000E15
_081240CC:
	ldr r0, _081240E0  @ =gRam
	ldr r2, _081240E4  @ =0x000015F7
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081240E8
	mov r0, #4
	bl sub_080CF370
	b _081240EE
_081240E0:
	.4byte gRam
_081240E4:
	.4byte 0x000015F7
_081240E8:
	mov r0, #4
	bl sub_080CF3B8
_081240EE:
	mov r6, #0
	ldr r1, _08124160  @ =gRam
	ldr r3, _08124164  @ =gUnknown_020030C0
	add r0, r5, r3
	ldrb r3, [r0]
	ldr r7, _08124168  @ =0x0000096C
	add r0, r1, r7
	strb r3, [r0]
	mov r0, #8
	and r0, r0, r3
	add r7, r1, #0
	cmp r0, #0
	bne _08124114
	mov r0, #4
	and r0, r0, r3
	mov r6, #2
	cmp r0, #0
	beq _08124114
	mov r6, #1
_08124114:
	ldr r0, _0812416C  @ =gUnknown_081804B4
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r1, _08124168  @ =0x0000096C
	add r4, r7, r1
	mov r6, #0
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C177C
	ldr r5, _08124170  @ =gUnknown_03003E74
	ldrh r0, [r5]
	ldr r2, _08124174  @ =0x00000964
	add r1, r7, r2
	ldrh r1, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	ldrh r2, [r2]
	mov r3, #0
	ldrsb r3, [r4, r3]
	mov r7, #136
	lsl r7, r7, #6
	add r4, r7, #0
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	str r6, [sp]
	bl sub_080C6368
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
_08124156:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08124160:
	.4byte gRam
_08124164:
	.4byte gUnknown_020030C0
_08124168:
	.4byte 0x0000096C
_0812416C:
	.4byte gUnknown_081804B4
_08124170:
	.4byte gUnknown_03003E74
_08124174:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08124060

