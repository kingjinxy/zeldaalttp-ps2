	THUMB_FUNC_START sub_081021F4
sub_081021F4: @ 0x081021F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	ldr r7, _08102268  @ =gRam
	ldr r0, _0810226C  @ =0x00000F92
	add r2, r7, r0
	add r2, r4, r2
	ldr r1, _08102270  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	lsr r1, r1, #1
	mov r5, #1
	mov r8, r5
	mov r0, r8
	and r1, r1, r0
	ldr r3, _08102274  @ =gUnknown_0817B61E
	ldr r5, _08102278  @ =0x00000FB2
	add r0, r7, r5
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, r3
	ldrb r0, [r0]
	add r0, r0, r1
	strb r0, [r2]
	ldr r1, _0810227C  @ =0x00000FC2
	add r0, r7, r1
	add r0, r4, r0
	ldrb r6, [r0]
	cmp r6, #0
	bne _0810225C
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810225C
	ldrb r0, [r5]
	mov r1, r8
	eor r0, r0, r1
	strb r0, [r5]
	ldr r5, _08102280  @ =0x00000F52
	add r0, r7, r5
	add r0, r4, r0
	strb r6, [r0]
_0810225C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102268:
	.4byte gRam
_0810226C:
	.4byte 0x00000F92
_08102270:
	.4byte 0x00000996
_08102274:
	.4byte gUnknown_0817B61E
_08102278:
	.4byte 0x00000FB2
_0810227C:
	.4byte 0x00000FC2
_08102280:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081021F4

