	THUMB_FUNC_START sub_08011120
sub_08011120: @ 0x08011120
	push {r4,lr}
	add r3, r1, #0
	lsl r0, r0, #24
	mov r1, #192
	lsl r1, r1, #18
	and r1, r1, r0
	lsr r1, r1, #24
	cmp r1, #0
	bne _0801114C
	ldr r1, _08011144  @ =0x00003048
	add r0, r1, #0
	strh r0, [r3]
	add r1, r3, #0
	add r1, r1, #64
	ldr r2, _08011148  @ =0x00003068
	add r0, r2, #0
	strh r0, [r1]
	b _08011178
_08011144:
	.4byte 0x00003048
_08011148:
	.4byte 0x00003068
_0801114C:
	cmp r1, #0
	blt _08011178
	cmp r1, #2
	bgt _08011178
	mov r4, #176
	lsl r4, r4, #8
	cmp r1, #1
	bne _08011160
	mov r4, #192
	lsl r4, r4, #6
_08011160:
	ldrh r2, [r3]
	ldr r1, _08011180  @ =0x00000FFF
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r4
	strh r0, [r3]
	add r2, r3, #0
	add r2, r2, #64
	ldrh r0, [r2]
	and r1, r1, r0
	orr r4, r4, r1
	strh r4, [r2]
_08011178:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08011180:
	.4byte 0x00000FFF
	THUMB_FUNC_END sub_08011120

