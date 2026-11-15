	THUMB_FUNC_START sub_08092D18
sub_08092D18: @ 0x08092D18
	push {r4-r6,lr}
	ldr r4, _08092E08  @ =gRam
	ldr r0, _08092E0C  @ =0x000016D5
	add r2, r4, r0
	mov r1, #0
	mov r0, #2
	strb r0, [r2]
	ldr r2, _08092E10  @ =0x000016CC
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #190
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #130
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _08092E14  @ =0x00000A58
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	mov r1, #191
	lsl r1, r1, #5
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08092E18  @ =0x00001796
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #73
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #42
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #170
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08092E1C  @ =0x000016E8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _08092E20  @ =0x00001791
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08092E24  @ =0x00001792
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #119
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #66
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #41
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #102
	add r0, r4, r2
	strb r5, [r0]
	bl sub_08092B0C
	ldr r0, _08092E28  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _08092E2C  @ =0x000016C9
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08092E30  @ =0x00001702
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #47
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #168
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08092E34  @ =0x000017F1
	add r3, r4, r0
	add r1, r1, #103
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _08092E38  @ =0x00001710
	add r2, r4, r0
	add r0, r0, #94
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	ldr r1, _08092E3C  @ =0x0000180D
	add r6, r4, r1
	strb r5, [r6]
	strb r5, [r2]
	strb r5, [r3]
	bl sub_08092BF4
	strb r5, [r6]
	ldr r2, _08092E40  @ =0x00001789
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08092E44  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _08092E48  @ =0x00001783
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08092E4C  @ =0x00001739
	add r4, r4, r2
	strb r5, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_08092E08:
	.4byte gRam
_08092E0C:
	.4byte 0x000016D5
_08092E10:
	.4byte 0x000016CC
_08092E14:
	.4byte 0x00000A58
_08092E18:
	.4byte 0x00001796
_08092E1C:
	.4byte 0x000016E8
_08092E20:
	.4byte 0x00001791
_08092E24:
	.4byte 0x00001792
_08092E28:
	.4byte 0x00001705
_08092E2C:
	.4byte 0x000016C9
_08092E30:
	.4byte 0x00001702
_08092E34:
	.4byte 0x000017F1
_08092E38:
	.4byte 0x00001710
_08092E3C:
	.4byte 0x0000180D
_08092E40:
	.4byte 0x00001789
_08092E44:
	.4byte 0x00001727
_08092E48:
	.4byte 0x00001783
_08092E4C:
	.4byte 0x00001739
	THUMB_FUNC_END sub_08092D18

