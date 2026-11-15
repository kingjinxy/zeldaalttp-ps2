	THUMB_FUNC_START sub_08128A10
sub_08128A10: @ 0x08128A10
	push {r4,r5,lr}
	mov r4, #0
	ldr r2, _08128A44  @ =gRam
	ldr r0, _08128A48  @ =0x00000546
	add r1, r2, r0
	ldrb r0, [r1]
	mov r3, #192
	and r3, r3, r0
	ldr r5, _08128A4C  @ =0x00000547
	add r0, r2, r5
	ldrb r0, [r0]
	orr r3, r3, r0
	ldrh r1, [r1]
	mov r0, #193
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08128A54
	ldr r1, _08128A50  @ =0x00001AE3
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128A54
	bl sub_08129D90
	b _08128AB8
_08128A44:
	.4byte gRam
_08128A48:
	.4byte 0x00000546
_08128A4C:
	.4byte 0x00000547
_08128A50:
	.4byte 0x00001AE3
_08128A54:
	ldr r5, _08128A7C  @ =0x00001B04
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _08128A84
	ldr r1, _08128A80  @ =0x00000547
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08128A84
	sub r5, r5, #33
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128A84
	bl sub_08129DC0
	b _08128AB8
_08128A7C:
	.4byte 0x00001B04
_08128A80:
	.4byte 0x00000547
_08128A84:
	mov r0, #8
	and r0, r0, r3
	cmp r0, #0
	beq _08128AA0
	ldr r0, _08128A9C  @ =0x00001AE2
	add r2, r2, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08128AB8
	mov r0, #0
	strb r0, [r2]
	b _08128ABC
_08128A9C:
	.4byte 0x00001AE2
_08128AA0:
	mov r0, #4
	and r3, r3, r0
	cmp r3, #0
	beq _08128AB8
	ldr r1, _08128B34  @ =0x00001AE2
	add r2, r2, r1
	ldrb r0, [r2]
	cmp r0, #1
	beq _08128AB8
	mov r0, #1
	strb r0, [r2]
	mov r4, #1
_08128AB8:
	cmp r4, #0
	beq _08128B26
_08128ABC:
	mov r0, #69
	mov r1, #0
	bl sub_0812A324
	ldr r4, _08128B38  @ =gRam
	ldr r3, _08128B3C  @ =gUnknown_08180C7E
	ldr r5, _08128B34  @ =0x00001AE2
	add r2, r4, r5
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	add r5, r5, #6
	add r0, r4, r5
	mov r5, #0
	strb r1, [r0]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	lsr r0, r0, #8
	ldr r2, _08128B40  @ =0x00001AE9
	add r1, r4, r2
	strb r0, [r1]
	bl sub_0812740C
	mov r1, #215
	lsl r1, r1, #5
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _08128B44  @ =0x00001AD2
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #18
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #30
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #6
	add r4, r4, r2
	strh r5, [r4]
	mov r2, #0
	mov r1, #207
	ldr r0, _08128B48  @ =gUnknown_0201053F
_08128B1C:
	strb r2, [r0]
	sub r0, r0, #1
	sub r1, r1, #1
	cmp r1, #0
	bge _08128B1C
_08128B26:
	bl sub_08129578
	mov r0, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08128B34:
	.4byte 0x00001AE2
_08128B38:
	.4byte gRam
_08128B3C:
	.4byte gUnknown_08180C7E
_08128B40:
	.4byte 0x00001AE9
_08128B44:
	.4byte 0x00001AD2
_08128B48:
	.4byte gUnknown_0201053F
	THUMB_FUNC_END sub_08128A10

