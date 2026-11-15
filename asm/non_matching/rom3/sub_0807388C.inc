	THUMB_FUNC_START sub_0807388C
sub_0807388C: @ 0x0807388C
	push {r4-r7,lr}
	ldr r4, _08073A60  @ =gRam
	ldr r1, _08073A64  @ =0x00001A5C
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	mov r5, #0
	mov r6, #0
	strh r1, [r0]
	mov r3, #211
	lsl r3, r3, #5
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #4
	add r0, r4, r3
	ldrh r1, [r0]
	ldr r2, _08073A68  @ =0x00000B74
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _08073A6C  @ =0x000009B2
	add r2, r4, r3
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	beq _08073944
	ldr r1, _08073A70  @ =0x00001A74
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r3, _08073A74  @ =0x00000B8C
	add r1, r4, r3
	strh r0, [r1]
	add r0, r0, #2
	add r3, r3, #2
	add r1, r4, r3
	strh r0, [r1]
	ldr r1, _08073A78  @ =0x00001A76
	add r0, r4, r1
	ldrh r0, [r0]
	add r3, r3, #2
	add r1, r4, r3
	strh r0, [r1]
	add r0, r0, #2
	add r3, r3, #2
	add r1, r4, r3
	strh r0, [r1]
_08073944:
	ldr r1, _08073A7C  @ =0x00001A78
	add r0, r4, r1
	ldrb r1, [r0]
	mov r3, #158
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08073A80  @ =0x00001A79
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08073A84  @ =0x00001A7A
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _08073A88  @ =0x00001A7B
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bne _0807399C
	ldr r1, _08073A74  @ =0x00000B8C
	add r0, r4, r1
	ldrh r0, [r0]
	sub r0, r0, #2
	ldr r2, _08073A8C  @ =0x00000B8E
	add r1, r4, r2
	strh r0, [r1]
	mov r3, #185
	lsl r3, r3, #4
	add r0, r4, r3
	ldrh r0, [r0]
	sub r0, r0, #2
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
_0807399C:
	ldr r3, _08073A90  @ =0x00001A82
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08073A94  @ =0x000016D5
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08073A98  @ =0x00000B1E
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08073A9C  @ =0x0000172C
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08073AA0  @ =0x000009DE
	add r0, r4, r2
	strh r1, [r0]
	mov r3, #184
	lsl r3, r3, #5
	add r0, r4, r3
	strb r5, [r0]
	ldr r0, _08073AA4  @ =0x000017AA
	add r7, r4, r0
	mov r0, #144
	strb r0, [r7]
	bl sub_08070BB0
	ldr r1, _08073AA8  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	bl sub_08092B60
	ldr r2, _08073AAC  @ =0x00001787
	add r0, r4, r2
	strb r5, [r0]
	bl sub_08114600
	mov r3, #188
	lsl r3, r3, #4
	add r0, r4, r3
	strh r6, [r0]
	ldr r1, _08073AB0  @ =0x00000A4C
	add r0, r4, r1
	strh r6, [r0]
	ldr r2, _08073AB4  @ =0x000009E8
	add r0, r4, r2
	strh r6, [r0]
	ldr r3, _08073AB8  @ =0x00000ABE
	add r0, r4, r3
	strh r6, [r0]
	ldr r6, _08073ABC  @ =0x000009AD
	add r3, r4, r6
	strb r5, [r3]
	ldr r1, _08073AC0  @ =gMaxHealth
	ldrb r0, [r1]
	cmp r0, #0
	bne _08073A5A
	strb r5, [r1]
	ldr r1, _08073AC4  @ =0x000009B4
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _08073AC8  @ =0x00001AC5
	add r0, r4, r2
	strb r1, [r0]
	add r6, r6, #8
	add r0, r4, r6
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	sub r6, r6, #9
	add r2, r4, r6
	ldrb r1, [r2]
	add r6, r6, #110
	add r0, r4, r6
	strh r1, [r0]
	mov r0, #18
	strb r0, [r2]
	mov r0, #1
	strb r0, [r3]
	strb r5, [r7]
_08073A5A:
	pop {r4-r7}
	pop {r0}
	bx r0
_08073A60:
	.4byte gRam
_08073A64:
	.4byte 0x00001A5C
_08073A68:
	.4byte 0x00000B74
_08073A6C:
	.4byte 0x000009B2
_08073A70:
	.4byte 0x00001A74
_08073A74:
	.4byte 0x00000B8C
_08073A78:
	.4byte 0x00001A76
_08073A7C:
	.4byte 0x00001A78
_08073A80:
	.4byte 0x00001A79
_08073A84:
	.4byte 0x00001A7A
_08073A88:
	.4byte 0x00001A7B
_08073A8C:
	.4byte 0x00000B8E
_08073A90:
	.4byte 0x00001A82
_08073A94:
	.4byte 0x000016D5
_08073A98:
	.4byte 0x00000B1E
_08073A9C:
	.4byte 0x0000172C
_08073AA0:
	.4byte 0x000009DE
_08073AA4:
	.4byte 0x000017AA
_08073AA8:
	.4byte 0x0000180D
_08073AAC:
	.4byte 0x00001787
_08073AB0:
	.4byte 0x00000A4C
_08073AB4:
	.4byte 0x000009E8
_08073AB8:
	.4byte 0x00000ABE
_08073ABC:
	.4byte 0x000009AD
_08073AC0:
	.4byte gMaxHealth
_08073AC4:
	.4byte 0x000009B4
_08073AC8:
	.4byte 0x00001AC5
	THUMB_FUNC_END sub_0807388C

