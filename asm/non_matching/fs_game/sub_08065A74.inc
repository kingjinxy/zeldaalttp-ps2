	THUMB_FUNC_START sub_08065A74
sub_08065A74: @ 0x08065A74
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08065AA0
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _08065CDC
_08065AA0:
	add r0, r7, #0
	add r0, r0, #9
	mov r1, #2
	strb r1, [r0]
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_08065AB0:
	add r0, r7, #0
	add r0, r0, #8
	ldrb r1, [r0]
	cmp r1, #7
	bls _08065ABC
	b _08065B56
_08065ABC:
	mov r0, #11
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08065B30
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #4]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #9
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #80
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
_08065B30:
	add r0, r7, #0
	add r0, r0, #9
	add r1, r7, #0
	add r1, r1, #9
	ldrb r2, [r1]
	add r1, r2, #4
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08065AB0
_08065B56:
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_08065B5E:
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _08065B70  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08065B74
	b _08065C90
	.byte 0x00
	.byte 0x00
_08065B70:
	.4byte gUnknown_03006C80
_08065B74:
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #65
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08065C8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	mov r1, #192
	lsl r1, r1, #9
	str r1, [r0, #16]
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08065B5E
	.byte 0x00
	.byte 0x00
_08065C8C:
	.4byte gUnknown_03006A30
_08065C90:
	mov r0, #15
	bl sub_08012468
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08065CDC
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, _08065CE4  @ =gUnknown_03000450
	ldr r1, [r7, #4]
	str r1, [r0]
	ldr r0, [r7]
	ldr r2, [r0, #88]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #2
	mov r1, #16
	bl sub_0800C0B0
	ldr r1, _08065CE8  @ =0x000001F9
	add r0, r1, #0
	bl play_sound
	mov r0, #13
	bl play_sound
	ldr r0, [r7]
	bl DeleteThisEntity
_08065CDC:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_08065CE4:
	.4byte gUnknown_03000450
_08065CE8:
	.4byte 0x000001F9
	THUMB_FUNC_END sub_08065A74

