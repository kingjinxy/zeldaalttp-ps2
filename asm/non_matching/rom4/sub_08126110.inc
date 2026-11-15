	THUMB_FUNC_START sub_08126110
sub_08126110: @ 0x08126110
	push {r4,r5,lr}
	ldr r4, _08126170  @ =gRam
	ldr r0, _08126174  @ =0x00001B0A
	add r3, r4, r0
	ldrh r2, [r3]
	ldr r0, _08126178  @ =0x000001B5
	cmp r2, r0
	bls _0812619C
	ldr r1, _0812617C  @ =0xFFFFFE4A
	add r2, r2, r1
	strh r2, [r3]
	ldr r5, _08126180  @ =0x00001B10
	add r1, r4, r5
	ldr r5, _08126184  @ =0x000002DB
	add r0, r5, #0
	ldrh r5, [r1]
	add r0, r0, r5
	strh r0, [r1]
	ldr r0, _08126188  @ =0x00001B0E
	add r1, r4, r0
	mov r5, #219
	lsl r5, r5, #1
	add r0, r5, #0
	ldrh r5, [r1]
	add r0, r0, r5
	strh r0, [r1]
	lsl r2, r2, #16
	ldr r0, _0812618C  @ =0xE0FF0000
	cmp r2, r0
	bhi _08126154
	ldr r0, _08126190  @ =0x000009AD
	add r1, r4, r0
	mov r0, #4
	strb r0, [r1]
_08126154:
	ldr r1, _08126194  @ =0xFFFF90B5
	add r0, r1, #0
	ldrh r3, [r3]
	add r0, r0, r3
	lsl r0, r0, #16
	mov r1, #218
	lsl r1, r1, #17
	cmp r0, r1
	bhi _081261AC
	ldr r5, _08126198  @ =0x00000A3C
	add r1, r4, r5
	mov r0, #0
	strh r0, [r1]
	b _081261AC
_08126170:
	.4byte gRam
_08126174:
	.4byte 0x00001B0A
_08126178:
	.4byte 0x000001B5
_0812617C:
	.4byte 0xFFFFFE4A
_08126180:
	.4byte 0x00001B10
_08126184:
	.4byte 0x000002DB
_08126188:
	.4byte 0x00001B0E
_0812618C:
	.4byte 0xE0FF0000
_08126190:
	.4byte 0x000009AD
_08126194:
	.4byte 0xFFFF90B5
_08126198:
	.4byte 0x00000A3C
_0812619C:
	mov r0, #0
	strh r0, [r3]
	ldr r1, _081261B4  @ =gUnknown_03000050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #112
	strb r0, [r1, #1]
_081261AC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081261B4:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126110

