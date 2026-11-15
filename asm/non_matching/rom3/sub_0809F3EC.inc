	THUMB_FUNC_START sub_0809F3EC
sub_0809F3EC: @ 0x0809F3EC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #4
	ldr r2, _0809F4C4  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r2
	mov r8, r0
	ldrh r0, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r4, _0809F4C8  @ =0x00000964
	add r6, r2, r4
	ldrh r3, [r6]
	add r4, r4, #4
	add r0, r2, r4
	strh r3, [r0]
	mov r0, #0
	ldrsh r1, [r1, r0]
	ldr r4, _0809F4CC  @ =gUnknown_08168248
	ldr r0, _0809F4D0  @ =0x00001726
	add r5, r2, r0
	ldrb r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	add r1, r1, r0
	ldr r0, _0809F4D4  @ =0x00000A0E
	add r2, r2, r0
	ldrh r0, [r2]
	and r1, r1, r0
	asr r1, r1, #3
	strh r1, [r6]
	ldr r1, _0809F4D8  @ =gUnknown_08168238
	ldrb r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r3, r3, r0
	ldrh r0, [r2]
	and r3, r3, r0
	mov r1, r8
	strh r3, [r1]
	mov r0, sp
	bl sub_080A0610
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809F45E
	mov r0, sp
	ldrb r0, [r0]
	cmp r0, #9
	bne _0809F4BE
_0809F45E:
	ldr r2, _0809F4C4  @ =gRam
	mov r3, #151
	lsl r3, r3, #4
	add r0, r2, r3
	mov r4, #0
	ldrsh r1, [r0, r4]
	ldr r3, _0809F4DC  @ =gUnknown_08168250
	ldr r0, _0809F4D0  @ =0x00001726
	add r5, r2, r0
	ldrb r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r3
	mov r3, #0
	ldrsh r0, [r0, r3]
	add r1, r1, r0
	ldr r0, _0809F4D4  @ =0x00000A0E
	add r4, r2, r0
	ldrh r0, [r4]
	and r1, r1, r0
	asr r1, r1, #3
	ldr r3, _0809F4C8  @ =0x00000964
	add r0, r2, r3
	strh r1, [r0]
	ldr r0, _0809F4E0  @ =0x00000968
	add r3, r2, r0
	ldr r1, _0809F4E4  @ =gUnknown_08168240
	ldrb r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	ldrh r1, [r4]
	and r0, r0, r1
	mov r1, #150
	lsl r1, r1, #4
	add r2, r2, r1
	strh r0, [r2]
	mov r0, sp
	bl sub_080A0610
	lsl r0, r0, #24
	cmp r0, #0
	beq _0809F4E8
	mov r0, sp
	ldrb r0, [r0]
	cmp r0, #9
	beq _0809F4E8
_0809F4BE:
	mov r0, #1
	b _0809F4EA
	.byte 0x00
	.byte 0x00
_0809F4C4:
	.4byte gRam
_0809F4C8:
	.4byte 0x00000964
_0809F4CC:
	.4byte gUnknown_08168248
_0809F4D0:
	.4byte 0x00001726
_0809F4D4:
	.4byte 0x00000A0E
_0809F4D8:
	.4byte gUnknown_08168238
_0809F4DC:
	.4byte gUnknown_08168250
_0809F4E0:
	.4byte 0x00000968
_0809F4E4:
	.4byte gUnknown_08168240
_0809F4E8:
	mov r0, #0
_0809F4EA:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0809F3EC

	.byte 0x00
	.byte 0x00
