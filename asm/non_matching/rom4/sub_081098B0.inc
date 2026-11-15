	THUMB_FUNC_START sub_081098B0
sub_081098B0: @ 0x081098B0
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _0810993C  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r4
	mov r9, r0
	strb r1, [r0]
	ldr r1, _08109940  @ =0x00001002
	add r6, r4, r1
	add r6, r5, r6
	ldrb r0, [r6]
	lsl r0, r0, #2
	ldr r2, _08109944  @ =0x00000961
	add r2, r2, r4
	mov r8, r2
	strb r0, [r2]
	bl GetRandomInt
	ldr r2, _08109948  @ =gUnknown_0817C334
	mov r1, #3
	and r1, r1, r0
	mov r3, r8
	mov r0, #0
	ldrsb r0, [r3, r0]
	orr r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r6]
	ldr r2, _0810994C  @ =gUnknown_0200F318
	ldr r1, _08109950  @ =gUnknown_0817C324
	ldrb r0, [r6]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	add r2, r2, #12
	ldr r1, _08109954  @ =gUnknown_0817C32C
	ldrb r0, [r6]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _08109958  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r2, r9
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C351C
	ldr r3, _0810995C  @ =0x00000FC2
	add r4, r4, r3
	add r4, r5, r4
	mov r0, #48
	strb r0, [r4]
	add r0, r5, #0
	mov r1, #91
	bl sub_080CF140
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
_0810993C:
	.4byte gRam
_08109940:
	.4byte 0x00001002
_08109944:
	.4byte 0x00000961
_08109948:
	.4byte gUnknown_0817C334
_0810994C:
	.4byte gUnknown_0200F318
_08109950:
	.4byte gUnknown_0817C324
_08109954:
	.4byte gUnknown_0817C32C
_08109958:
	.4byte 0x00000F52
_0810995C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_081098B0

