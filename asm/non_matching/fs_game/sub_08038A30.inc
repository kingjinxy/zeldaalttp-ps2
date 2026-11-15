	THUMB_FUNC_START sub_08038A30
sub_08038A30: @ 0x08038A30
	push {r4,r5,r7,lr}
	mov r7, sp
	bl sub_08037554
	cmp r0, #0
	bne _08038A3E
	b _08038C6C
_08038A3E:
	bl sub_08037750
	ldr r0, _08038A5C  @ =gUnknown_03000E20
	ldrb r1, [r0, #17]
	cmp r1, #0
	bne _08038A60
	mov r0, #8
	bl sub_0803781C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08038A60
	b _08038A6E
	.byte 0x00
	.byte 0x00
_08038A5C:
	.4byte gUnknown_03000E20
_08038A60:
	bl sub_0802D988
	bl sub_0802CD3C
	bl sub_08037574
	b _08038C9C
_08038A6E:
	ldr r0, _08038BB0  @ =gUnknown_03000940
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08038A8A
	mov r0, #0
	bl sub_0803DE94
_08038A8A:
	ldr r0, _08038BB0  @ =gUnknown_03000940
	ldrh r1, [r0, #2]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08038AA6
	mov r0, #1
	bl sub_0803DE94
_08038AA6:
	ldr r0, _08038BB0  @ =gUnknown_03000940
	ldrh r1, [r0, #4]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08038AC2
	mov r0, #2
	bl sub_0803DE94
_08038AC2:
	ldr r0, _08038BB0  @ =gUnknown_03000940
	ldrh r1, [r0, #6]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08038ADE
	mov r0, #3
	bl sub_0803DE94
_08038ADE:
	ldr r0, _08038BB4  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	ldr r0, _08038BB8  @ =0x00057E03
	cmp r1, r0
	bhi _08038AF4
	ldr r1, _08038BB4  @ =gUnknown_03006C80
	ldr r0, _08038BB4  @ =gUnknown_03006C80
	ldr r1, _08038BB4  @ =gUnknown_03006C80
	ldr r2, [r1, #28]
	add r1, r2, #1
	str r1, [r0, #28]
_08038AF4:
	ldr r0, _08038BBC  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #255
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08038B0C
	bl sub_080141E8
_08038B0C:
	ldr r0, _08038BB4  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #111
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _08038BBC  @ =gUnknown_03000E20
	ldr r0, _08038BBC  @ =gUnknown_03000E20
	ldr r1, _08038BBC  @ =gUnknown_03000E20
	ldrh r2, [r1]
	add r1, r2, #1
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	bl sub_0802B74C
	ldr r0, _08038BC0  @ =gUnknown_03006C70
	ldr r4, [r0]
	bl _call_via_r4
	bl sub_08014900
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08013A60
	bl sub_08008ED8
	bl sub_0802CD3C
	bl sub_08000434
	bl sub_0803F284
	bl sub_08052A88
	bl sub_08000BAC
	bl sub_0802BFC4
	ldr r0, _08038BBC  @ =gUnknown_03000E20
	ldrb r1, [r0, #18]
	cmp r1, #0
	beq _08038BD6
	bl sub_08036760
	ldr r1, _08038BC4  @ =0x80040000
	add r0, r1, #0
	bl play_sound
	ldr r0, _08038BC8  @ =gUnknown_03005050
	ldr r1, _08038BC8  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038BCC  @ =gSubState
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08038BD0  @ =gUnknown_03000C00
	mov r1, #1
	strb r1, [r0]
	ldr r0, _08038BBC  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	b _08038C9C
_08038BB0:
	.4byte gUnknown_03000940
_08038BB4:
	.4byte gUnknown_03006C80
_08038BB8:
	.4byte 0x00057E03
_08038BBC:
	.4byte gUnknown_03000E20
_08038BC0:
	.4byte gUnknown_03006C70
_08038BC4:
	.4byte 0x80040000
_08038BC8:
	.4byte gUnknown_03005050
_08038BCC:
	.4byte gSubState
_08038BD0:
	.4byte gUnknown_03000C00
	.byte 0x30
	.byte 0xE0
_08038BD6:
	bl sub_08038CA8
	cmp r0, #0
	beq _08038C38
	bl sub_08036760
	bl sub_0803DFC8
	bl sub_0802D970
	ldr r1, _08038C4C  @ =0x80040000
	add r0, r1, #0
	bl play_sound
	ldr r0, _08038C50  @ =gUnknown_03000420
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038C54  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #110
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038C58  @ =gUnknown_03006D14
	mov r1, #1
	strh r1, [r0]
	ldr r1, _08038C5C  @ =gUnknown_03005050
	ldr r0, _08038C5C  @ =gUnknown_03005050
	ldr r1, _08038C5C  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038C60  @ =gSubState
	mov r1, #0
	strb r1, [r0]
_08038C38:
	bl sub_0800099C
	ldr r0, _08038C64  @ =gUnknown_03000490
	ldr r1, _08038C68  @ =gRandom
	ldr r2, [r1]
	str r2, [r0]
	bl sub_08037574
	b _08038C9C
	.byte 0x00
	.byte 0x00
_08038C4C:
	.4byte 0x80040000
_08038C50:
	.4byte gUnknown_03000420
_08038C54:
	.4byte gUnknown_03006C80
_08038C58:
	.4byte gUnknown_03006D14
_08038C5C:
	.4byte gUnknown_03005050
_08038C60:
	.4byte gSubState
_08038C64:
	.4byte gUnknown_03000490
_08038C68:
	.4byte gRandom
_08038C6C:
	ldr r0, _08038CA4  @ =gUnknown_03005E10
	ldr r1, _08038CA4  @ =gUnknown_03005E10
	ldr r2, _08038CA4  @ =gUnknown_03005E10
	ldr r3, _08038CA4  @ =gUnknown_03005E10
	ldrh r4, [r3, #6]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strh r5, [r3, #6]
	ldrh r3, [r2, #4]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strh r4, [r2, #4]
	ldrh r2, [r1, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #2]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
_08038C9C:
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08038CA4:
	.4byte gUnknown_03005E10
	THUMB_FUNC_END sub_08038A30

