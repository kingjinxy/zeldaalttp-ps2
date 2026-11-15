	THUMB_FUNC_START sub_08032F50
sub_08032F50: @ 0x08032F50
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r1, _08033020  @ =gUnknown_03006C80
	mov r5, #0
	mov r0, #2
	strb r0, [r1, #7]
	strb r0, [r1, #1]
	mov r6, #1
	strb r6, [r1, #5]
	ldr r1, _08033024  @ =gRandom
	ldr r0, _08033028  @ =gUnknown_03000490
	ldr r0, [r0]
	str r0, [r1]
	bl sub_080144A0
	bl sub_08012F20
	bl sub_08013804
	bl sub_0802C800
	bl sub_0803A544
	str r5, [sp]
	ldr r1, _0803302C  @ =gBG0Buffer
	ldr r2, _08033030  @ =0x01000400
	mov r0, sp
	bl CpuFastSet
	mov r0, #2
	bl load_palette_from_gfx_group
	ldr r0, _08033034  @ =gGameLanguage
	ldrb r0, [r0]
	mov r1, #41
	cmp r0, #0
	bne _08032F9C
	mov r1, #8
_08032F9C:
	add r0, r1, #0
	bl load_palette_from_gfx_group
	mov r0, #9
	bl load_gfx_group
	bl sub_0803364C
	ldr r1, _08033038  @ =gHeldKeys
	ldr r0, _0803303C  @ =gNewKeys
	mov r4, #0
	strh r5, [r0]
	strh r5, [r1]
	ldr r0, _08033040  @ =gUnknown_03000940
	strh r5, [r0, #6]
	strh r5, [r0, #4]
	strh r5, [r0, #2]
	strh r5, [r0]
	ldr r0, _08033044  @ =gUnknown_03005E10
	strh r5, [r0, #6]
	strh r5, [r0, #4]
	strh r5, [r0, #2]
	strh r5, [r0]
	ldr r1, _08033048  @ =gUnknown_03000E20
	mov r0, #30
	strh r0, [r1, #2]
	strh r5, [r1]
	ldr r0, _0803304C  @ =gUnknown_03000830
	strb r4, [r0]
	ldr r0, _08033050  @ =gUnknown_03000C00
	strb r6, [r0]
	ldr r0, _08033054  @ =gUnknown_03006D14
	strh r6, [r0]
	ldr r0, _08033058  @ =gUnknown_02016D60
	strb r4, [r0, #2]
	mov r0, #0
	mov r1, #0
	bl set_palette_color
	ldr r2, _0803305C  @ =gUnknown_030004A0
	ldrh r0, [r2]
	mov r3, #186
	lsl r3, r3, #5
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r0, _08033060  @ =0x00001F04
	strh r0, [r2, #8]
	add r2, r2, #104
	mov r0, #16
	strh r0, [r2]
	ldr r1, _08033064  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08033068  @ =gSubState
	strb r4, [r0]
	mov r0, #0
	mov r1, #8
	bl sub_0800C0B0
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033020:
	.4byte gUnknown_03006C80
_08033024:
	.4byte gRandom
_08033028:
	.4byte gUnknown_03000490
_0803302C:
	.4byte gBG0Buffer
_08033030:
	.4byte 0x01000400
_08033034:
	.4byte gGameLanguage
_08033038:
	.4byte gHeldKeys
_0803303C:
	.4byte gNewKeys
_08033040:
	.4byte gUnknown_03000940
_08033044:
	.4byte gUnknown_03005E10
_08033048:
	.4byte gUnknown_03000E20
_0803304C:
	.4byte gUnknown_03000830
_08033050:
	.4byte gUnknown_03000C00
_08033054:
	.4byte gUnknown_03006D14
_08033058:
	.4byte gUnknown_02016D60
_0803305C:
	.4byte gUnknown_030004A0
_08033060:
	.4byte 0x00001F04
_08033064:
	.4byte gUnknown_03005050
_08033068:
	.4byte gSubState
	THUMB_FUNC_END sub_08032F50

