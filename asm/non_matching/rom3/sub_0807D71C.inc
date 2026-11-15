	THUMB_FUNC_START sub_0807D71C
sub_0807D71C: @ 0x0807D71C
	push {r4-r7,lr}
	ldr r1, _0807D760  @ =gRam
	ldr r2, _0807D764  @ =0x00000B3E
	add r0, r1, r2
	ldrh r5, [r0]
	ldr r3, _0807D768  @ =0x000009F8
	add r0, r1, r3
	ldrh r2, [r0]
	mov r0, #128
	lsl r0, r0, #7
	add r6, r1, #0
	cmp r2, r0
	bne _0807D774
	lsl r4, r5, #1
	ldr r7, _0807D76C  @ =0x00000C52
	add r1, r6, r7
	add r1, r4, r1
	mov r0, #151
	lsl r0, r0, #4
	add r2, r6, r0
	ldrh r3, [r2]
	ldr r7, _0807D770  @ =0xFFFFA000
	add r0, r7, #0
	orr r0, r0, r3
	strh r0, [r1]
	ldrh r1, [r2]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r3, r4, #0
	b _0807D78C
	.byte 0x00
	.byte 0x00
_0807D760:
	.4byte gRam
_0807D764:
	.4byte 0x00000B3E
_0807D768:
	.4byte 0x000009F8
_0807D76C:
	.4byte 0x00000C52
_0807D770:
	.4byte 0xFFFFA000
_0807D774:
	lsl r3, r5, #1
	ldr r4, _0807D7C0  @ =0x00000C52
	add r1, r6, r4
	add r1, r3, r1
	mov r7, #151
	lsl r7, r7, #4
	add r0, r6, r7
	ldrh r2, [r0]
	ldr r4, _0807D7C4  @ =0xFFFF8000
	add r0, r4, #0
	orr r0, r0, r2
	strh r0, [r1]
_0807D78C:
	ldr r7, _0807D7C8  @ =0x00000AA8
	add r1, r6, r7
	ldr r0, _0807D7CC  @ =gUnknown_081676F2
	add r0, r3, r0
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0807D7D4
	ldr r1, _0807D7C0  @ =0x00000C52
	add r0, r6, r1
	add r0, r3, r0
	mov r1, #0
	strh r1, [r0]
	add r1, r5, #1
	ldr r2, _0807D7D0  @ =0x00000B3E
	add r0, r6, r2
	strh r1, [r0]
	mov r3, #180
	lsl r3, r3, #4
	add r0, r6, r3
	strh r1, [r0]
	bl sub_0807D638
	b _0807D7E4
	.byte 0x00
	.byte 0x00
_0807D7C0:
	.4byte 0x00000C52
_0807D7C4:
	.4byte 0xFFFF8000
_0807D7C8:
	.4byte 0x00000AA8
_0807D7CC:
	.4byte gUnknown_081676F2
_0807D7D0:
	.4byte 0x00000B3E
_0807D7D4:
	add r5, r5, #1
	ldr r4, _0807D7EC  @ =0x00000B3E
	add r0, r6, r4
	strh r5, [r0]
	mov r7, #180
	lsl r7, r7, #4
	add r0, r6, r7
	strh r5, [r0]
_0807D7E4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807D7EC:
	.4byte 0x00000B3E
	THUMB_FUNC_END sub_0807D71C

