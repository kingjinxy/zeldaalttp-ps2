	THUMB_FUNC_START sub_08039AA0
sub_08039AA0: @ 0x08039AA0
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	mov r0, #192
	lsl r0, r0, #18
	ldrb r1, [r0, #4]
	add r0, r1, #0
	lsl r1, r0, #6
	ldr r0, _08039B1C  @ =gUnknown_0200B250
	add r1, r0, r1
	str r1, [r7, #4]
	add r0, r7, #0
	ldrb r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #3
	ldr r0, _08039B20  @ =gUnknown_03006CA8
	add r1, r0, r1
	str r1, [r7, #8]
	bl sub_0802E5E0
	add r0, r7, #0
	ldrb r1, [r0]
	add r0, r1, #0
	bl sub_0802E750
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08039B02
	ldr r0, [r7, #8]
	ldrh r1, [r0, #6]
	ldr r0, _08039B24  @ =0x000003E6
	cmp r1, r0
	bhi _08039B02
	ldr r1, [r7, #8]
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #6]
	add r1, r2, #1
	ldrh r2, [r0, #6]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #6]
_08039B02:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strb r1, [r0]
_08039B0A:
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, _08039B28  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08039B2C
	b _08039BEC
	.byte 0x00
	.byte 0x00
_08039B1C:
	.4byte gUnknown_0200B250
_08039B20:
	.4byte gUnknown_03006CA8
_08039B24:
	.4byte 0x000003E6
_08039B28:
	.4byte gUnknown_03006C80
_08039B2C:
	ldr r0, _08039BE8  @ =gUnknown_03006C80
	ldrb r1, [r0, #1]
	cmp r1, #2
	bne _08039B5E
	ldr r0, _08039BE8  @ =gUnknown_03006C80
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r1, r0, #0
	add r1, r1, #40
	add r0, r1, r2
	ldr r1, _08039BE8  @ =gUnknown_03006C80
	add r2, r7, #0
	add r2, r2, #12
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #3
	add r1, r1, #40
	add r2, r1, r3
	ldr r1, [r2]
	mov r2, #8
	orr r1, r1, r2
	str r1, [r0]
_08039B5E:
	ldr r0, _08039BE8  @ =gUnknown_03006C80
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r0, r0, r2
	ldrh r1, [r0, #46]
	cmp r1, #9
	bls _08039B9C
	ldr r0, _08039BE8  @ =gUnknown_03006C80
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r1, r0, #0
	add r1, r1, #40
	add r0, r1, r2
	ldr r1, _08039BE8  @ =gUnknown_03006C80
	add r2, r7, #0
	add r2, r2, #12
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #3
	add r1, r1, #40
	add r2, r1, r3
	ldr r1, [r2]
	mov r2, #4
	orr r1, r1, r2
	str r1, [r0]
_08039B9C:
	ldr r0, _08039BE8  @ =gUnknown_03006C80
	ldrb r1, [r0, #3]
	cmp r1, #2
	bne _08039BD0
	ldr r0, _08039BE8  @ =gUnknown_03006C80
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r1, r0, #0
	add r1, r1, #40
	add r0, r1, r2
	ldr r1, _08039BE8  @ =gUnknown_03006C80
	add r2, r7, #0
	add r2, r2, #12
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #3
	add r1, r1, #40
	add r2, r1, r3
	ldr r1, [r2]
	mov r2, #128
	lsl r2, r2, #2
	orr r1, r1, r2
	str r1, [r0]
_08039BD0:
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08039B0A
	.byte 0x00
	.byte 0x00
_08039BE8:
	.4byte gUnknown_03006C80
_08039BEC:
	bl sub_080399CC
	add r1, r0, #0
	ldr r0, _08039CC8  @ =gUnknown_03006C80
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0, #6]
	cmp r1, r0
	bcc _08039C08
	ldr r0, _08039CC8  @ =gUnknown_03006C80
	ldrb r1, [r0, #6]
	add r0, r1, #0
	bl sub_080398F8
_08039C08:
	ldr r0, [r7, #4]
	ldr r1, [r7, #8]
	ldr r2, [r1]
	str r2, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7, #8]
	ldrb r2, [r0, #5]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #5]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #5]
	ldr r0, [r7, #4]
	ldr r1, [r7, #8]
	ldrh r2, [r0, #6]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #6]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #6]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldr r2, _08039CC8  @ =gUnknown_03006C80
	add r3, r7, #0
	ldrb r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, #12
	add r3, r2, r4
	ldr r1, [r1, #16]
	ldr r2, [r3]
	add r1, r1, r2
	str r1, [r0, #16]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldr r2, _08039CC8  @ =gUnknown_03006C80
	ldr r1, [r1, #20]
	ldr r2, [r2, #32]
	add r1, r1, r2
	str r1, [r0, #20]
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldr r2, _08039CC8  @ =gUnknown_03006C80
	ldrb r3, [r2, #4]
	ldr r1, [r1, #24]
	add r2, r1, r3
	str r2, [r0, #24]
	ldr r0, [r7, #4]
	ldr r1, _08039CC8  @ =gUnknown_03006C80
	ldr r0, [r0, #28]
	ldr r1, [r1, #8]
	cmp r0, r1
	bcs _08039C86
	ldr r0, [r7, #4]
	ldr r1, _08039CC8  @ =gUnknown_03006C80
	ldr r2, [r1, #8]
	str r2, [r0, #28]
_08039C86:
	ldr r0, [r7, #4]
	ldr r1, _08039CC8  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, #12
	add r2, r1, r3
	ldr r0, [r0, #32]
	ldr r1, [r2]
	cmp r0, r1
	bcs _08039CB2
	ldr r0, [r7, #4]
	ldr r1, _08039CC8  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, #12
	add r2, r1, r3
	ldr r1, [r2]
	str r1, [r0, #32]
_08039CB2:
	mov r0, #192
	lsl r0, r0, #18
	ldrb r1, [r0, #4]
	add r0, r1, #0
	bl sub_08011434
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _08039CCC
	.byte 0x00
	.byte 0x00
_08039CC8:
	.4byte gUnknown_03006C80
_08039CCC:
	add sp, sp, #16
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08039AA0

