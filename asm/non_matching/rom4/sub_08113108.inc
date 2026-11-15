	THUMB_FUNC_START sub_08113108
sub_08113108: @ 0x08113108
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r6, _08113178  @ =gRam
	ldr r2, _0811317C  @ =0x00000F52
	add r1, r6, r2
	add r1, r0, r1
	mov r5, #0
	mov r2, #8
	strb r2, [r1]
	ldr r2, _08113180  @ =gUnknown_02010990
	mov r1, #27
	strb r1, [r2]
	ldr r1, _08113184  @ =0x00000F62
	add r4, r6, r1
	add r4, r0, r4
	strb r5, [r4]
	ldr r2, _08113188  @ =0x00000F92
	add r1, r6, r2
	add r1, r0, r1
	ldr r2, _0811318C  @ =gUnknown_0817D834
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _08113190  @ =0x00000FC2
	add r2, r6, r1
	add r2, r0, r2
	ldr r3, _08113194  @ =gUnknown_0817D843
	ldrb r1, [r4]
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _08113198  @ =0x00000F12
	add r1, r6, r2
	add r1, r0, r1
	strb r5, [r1]
	add r2, r2, #16
	add r1, r6, r2
	add r1, r0, r1
	strb r5, [r1]
	ldr r2, _0811319C  @ =gUnknown_02010993
	mov r1, #1
	strb r1, [r2]
	mov r1, #96
	bl sub_080CF0AC
	ldr r0, _081131A0  @ =gUnknown_02010992
	ldrb r0, [r0]
	cmp r0, #4
	bne _08113172
	ldr r0, _081131A4  @ =0x00001649
	add r1, r6, r0
	mov r0, #1
	strb r0, [r1]
_08113172:
	pop {r4-r6}
	pop {r0}
	bx r0
_08113178:
	.4byte gRam
_0811317C:
	.4byte 0x00000F52
_08113180:
	.4byte gUnknown_02010990
_08113184:
	.4byte 0x00000F62
_08113188:
	.4byte 0x00000F92
_0811318C:
	.4byte gUnknown_0817D834
_08113190:
	.4byte 0x00000FC2
_08113194:
	.4byte gUnknown_0817D843
_08113198:
	.4byte 0x00000F12
_0811319C:
	.4byte gUnknown_02010993
_081131A0:
	.4byte gUnknown_02010992
_081131A4:
	.4byte 0x00001649
	THUMB_FUNC_END sub_08113108

