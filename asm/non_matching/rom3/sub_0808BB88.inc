	THUMB_FUNC_START sub_0808BB88
sub_0808BB88: @ 0x0808BB88
	push {r4-r7,lr}
	ldr r3, _0808BBDC  @ =gRam
	ldr r0, _0808BBE0  @ =0x0000096C
	add r4, r3, r0
	mov r1, #0
	ldrsh r0, [r4, r1]
	lsl r0, r0, #1
	ldr r2, _0808BBE4  @ =gUnknown_02018040
	add r0, r0, r2
	ldrh r2, [r0]
	ldr r1, _0808BBE8  @ =0x000001FF
	add r0, r1, #0
	and r0, r0, r2
	mov r5, #150
	lsl r5, r5, #4
	add r2, r3, r5
	strh r0, [r2]
	mov r5, #0
	ldrsh r0, [r4, r5]
	lsl r0, r0, #1
	ldr r4, _0808BBEC  @ =gUnknown_02018042
	add r0, r0, r4
	ldrh r0, [r0]
	and r1, r1, r0
	ldr r0, _0808BBF0  @ =0x00000964
	add r5, r3, r0
	strh r1, [r5]
	mov r4, #43
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r0, _0808BBF4  @ =gUnknown_081537DE
	add r2, r0, #0
	add r2, r2, #86
	add r6, r0, #0
	ldrh r2, [r2]
	cmp r1, r2
	bne _0808BBFC
	mov r2, #0
	ldrsh r1, [r5, r2]
	ldr r0, _0808BBF8  @ =gUnknown_08153836
	add r0, r0, #86
	b _0808BC2E
_0808BBDC:
	.4byte gRam
_0808BBE0:
	.4byte 0x0000096C
_0808BBE4:
	.4byte gUnknown_02018040
_0808BBE8:
	.4byte 0x000001FF
_0808BBEC:
	.4byte gUnknown_02018042
_0808BBF0:
	.4byte 0x00000964
_0808BBF4:
	.4byte gUnknown_081537DE
_0808BBF8:
	.4byte gUnknown_08153836
_0808BBFC:
	sub r4, r4, #1
	cmp r4, #0
	bge _0808BC0E
	mov r4, #182
	lsl r4, r4, #4
	add r1, r3, r4
	mov r0, #0
	strh r0, [r1]
	b _0808BD2E
_0808BC0E:
	mov r5, #150
	lsl r5, r5, #4
	add r0, r3, r5
	mov r2, #0
	ldrsh r1, [r0, r2]
	lsl r2, r4, #1
	add r0, r2, r6
	ldrh r0, [r0]
	cmp r1, r0
	bne _0808BBFC
	add r5, r5, #4
	add r0, r3, r5
	mov r5, #0
	ldrsh r1, [r0, r5]
	ldr r0, _0808BCE0  @ =gUnknown_08153836
	add r0, r2, r0
_0808BC2E:
	ldrh r0, [r0]
	cmp r1, r0
	bne _0808BBFC
	mov r4, #131
	ldr r5, _0808BCE4  @ =gRam
	mov r6, #0
	mov r0, #0
	mov r12, r0
	ldr r1, _0808BCE8  @ =0x000009E8
	add r7, r5, r1
_0808BC42:
	sub r4, r4, #1
	cmp r4, #0
	blt _0808BD2E
	ldr r2, _0808BCEC  @ =0x0000096C
	add r0, r3, r2
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r0, _0808BCF0  @ =gUnknown_08153994
	lsl r2, r4, #1
	add r0, r2, r0
	ldrh r0, [r0]
	cmp r1, r0
	bne _0808BC42
	mov r1, #171
	lsl r1, r1, #4
	add r0, r3, r1
	ldr r1, _0808BCF4  @ =gUnknown_0815388E
	add r1, r2, r1
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0808BC42
	ldr r2, _0808BCF8  @ =0x0000166A
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0808BCA8
	ldr r1, _0808BCFC  @ =0x0000175F
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #1
	beq _0808BD18
	sub r2, r2, #7
	add r0, r3, r2
	ldrb r1, [r0]
	sub r0, r1, #7
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _0808BC96
	cmp r4, #71
	bgt _0808BCA8
_0808BC96:
	add r0, r1, #0
	cmp r0, #0
	beq _0808BCA8
	cmp r0, #5
	beq _0808BCA8
	cmp r0, #14
	beq _0808BCA8
	cmp r0, #1
	bne _0808BD18
_0808BCA8:
	ldr r0, _0808BD00  @ =gUnknown_08153A9A
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r4, _0808BD04  @ =0x00000A1C
	add r0, r5, r4
	strh r1, [r0]
	ldr r1, _0808BD08  @ =0x00001702
	add r0, r5, r1
	strb r6, [r0]
	ldr r2, _0808BD0C  @ =0x000016F8
	add r0, r5, r2
	strb r6, [r0]
	sub r4, r4, #112
	add r1, r5, r4
	mov r0, #15
	strb r0, [r1]
	ldr r0, _0808BD10  @ =0x00000A1A
	add r1, r5, r0
	mov r0, #6
	strh r0, [r1]
	ldr r1, _0808BD14  @ =0x000009AD
	add r0, r5, r1
	strb r6, [r0]
	mov r2, r12
	strh r2, [r7]
	bl sub_08129EE0
	b _0808BD2E
_0808BCE0:
	.4byte gUnknown_08153836
_0808BCE4:
	.4byte gRam
_0808BCE8:
	.4byte 0x000009E8
_0808BCEC:
	.4byte 0x0000096C
_0808BCF0:
	.4byte gUnknown_08153994
_0808BCF4:
	.4byte gUnknown_0815388E
_0808BCF8:
	.4byte 0x0000166A
_0808BCFC:
	.4byte 0x0000175F
_0808BD00:
	.4byte gUnknown_08153A9A
_0808BD04:
	.4byte 0x00000A1C
_0808BD08:
	.4byte 0x00001702
_0808BD0C:
	.4byte 0x000016F8
_0808BD10:
	.4byte 0x00000A1A
_0808BD14:
	.4byte 0x000009AD
_0808BD18:
	mov r4, #182
	lsl r4, r4, #4
	add r1, r3, r4
	ldrh r0, [r1]
	cmp r0, #0
	bne _0808BD2E
	add r0, r0, #1
	strh r0, [r1]
	mov r0, #5
	bl sub_080AF4FC
_0808BD2E:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808BB88

