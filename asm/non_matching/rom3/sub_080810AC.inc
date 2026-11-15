	THUMB_FUNC_START sub_080810AC
sub_080810AC: @ 0x080810AC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _080810E4  @ =gRam
	ldr r0, _080810E8  @ =0x00000978
	add r1, r2, r0
	mov r0, #0
	strh r0, [r1]
	ldr r0, _080810EC  @ =0x00000C02
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldrh r3, [r1]
	mov r1, #177
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r4, [r0]
	cmp r4, #0
	bne _080810F0
	mov r4, #2
	cmp r3, #4
	beq _080810FE
	mov r4, #4
	b _080810F8
	.byte 0x00
	.byte 0x00
_080810E4:
	.4byte gRam
_080810E8:
	.4byte 0x00000978
_080810EC:
	.4byte 0x00000C02
_080810F0:
	mov r4, #2
	cmp r3, #4
	beq _080810FE
	mov r4, #0
_080810F8:
	cmp r3, #8
	beq _080810FE
	b _0808121A
_080810FE:
	ldr r1, _08081180  @ =0x00000C04
	add r0, r2, r1
	strh r4, [r0]
	mov r4, #0
	mov r8, r2
	mov r0, #192
	lsl r0, r0, #4
	add r0, r0, r8
	mov r9, r0
	ldr r1, _08081184  @ =0x000009E7
	add r1, r1, r8
	mov r10, r1
_08081116:
	mov r0, r9
	strh r4, [r0]
	lsl r5, r4, #1
	ldr r0, _08081188  @ =0x000018B0
	add r0, r0, r8
	add r0, r5, r0
	ldrh r0, [r0]
	mov r1, #254
	and r1, r1, r0
	cmp r1, #68
	beq _08081130
	cmp r1, #24
	bne _0808120C
_08081130:
	mov r0, #177
	lsl r0, r0, #4
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #0
	bne _08081198
	ldr r6, _0808118C  @ =0x00000BFE
	add r6, r6, r8
	ldr r0, _08081190  @ =gUnknown_081676B2
	add r0, r5, r0
	ldrh r1, [r6]
	ldrh r5, [r0]
	and r1, r1, r5
	cmp r1, #0
	bne _0808120C
	ldr r7, _08081194  @ =0x00000C02
	add r7, r7, r8
	ldrh r0, [r7]
	cmp r0, #8
	bne _08081166
	mov r0, #55
	mov r1, #0
	bl sub_0812A324
	ldrh r0, [r6]
	orr r0, r0, r5
	strh r0, [r6]
_08081166:
	add r0, r4, #0
	bl sub_08081040
	bl sub_08089F74
	ldrh r0, [r7]
	cmp r0, #8
	bne _0808120C
	mov r1, r9
	ldrh r0, [r1]
	bl sub_08089EBC
	b _0808120C
_08081180:
	.4byte 0x00000C04
_08081184:
	.4byte 0x000009E7
_08081188:
	.4byte 0x000018B0
_0808118C:
	.4byte 0x00000BFE
_08081190:
	.4byte gUnknown_081676B2
_08081194:
	.4byte 0x00000C02
_08081198:
	ldr r6, _0808123C  @ =0x00000BFE
	add r6, r6, r8
	ldr r0, _08081240  @ =gUnknown_081676B2
	add r0, r5, r0
	ldrh r1, [r6]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0808120C
	ldr r0, _08081244  @ =0x00000C02
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #8
	bne _080811EE
	mov r0, #56
	mov r1, #0
	bl sub_0812A324
	ldr r0, _08081248  @ =gUnknown_081676D2
	add r0, r5, r0
	ldrh r1, [r6]
	ldrh r0, [r0]
	and r0, r0, r1
	strh r0, [r6]
	ldr r1, _0808124C  @ =gRoomIds
	ldrh r0, [r1]
	cmp r0, #205
	beq _080811E0
	cmp r0, #105
	beq _080811E0
	cmp r0, #173
	beq _080811E0
	cmp r0, #236
	beq _080811E0
	cmp r0, #138
	bne _080811EE
_080811E0:
	ldr r0, _08081250  @ =0x000009E6
	add r0, r0, r8
	mov r1, #21
	strb r1, [r0]
	mov r0, #37
	mov r1, r10
	strb r0, [r1]
_080811EE:
	add r0, r4, #0
	bl sub_08081040
	bl sub_08089F74
	ldr r0, _08081254  @ =gRam
	ldr r1, _08081244  @ =0x00000C02
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #8
	bne _0808120C
	mov r1, r9
	ldrh r0, [r1]
	bl sub_08089EBC
_0808120C:
	mov r0, r9
	ldrh r4, [r0]
	add r4, r4, #1
	ldr r2, _08081254  @ =gRam
	cmp r4, #12
	beq _0808121A
	b _08081116
_0808121A:
	ldr r1, _08081244  @ =0x00000C02
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #16
	bne _0808122C
	ldr r0, _08081258  @ =0x000009AD
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
_0808122C:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808123C:
	.4byte 0x00000BFE
_08081240:
	.4byte gUnknown_081676B2
_08081244:
	.4byte 0x00000C02
_08081248:
	.4byte gUnknown_081676D2
_0808124C:
	.4byte gRoomIds
_08081250:
	.4byte 0x000009E6
_08081254:
	.4byte gRam
_08081258:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080810AC

