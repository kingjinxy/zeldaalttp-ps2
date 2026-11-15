	THUMB_FUNC_START sub_08112104
sub_08112104: @ 0x08112104
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _081121FC  @ =gRam
	ldr r1, _08112200  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r7, r2, #0
	cmp r0, #0
	bne _0811214A
	ldr r2, _08112204  @ =0x00000F92
	add r0, r7, r2
	add r4, r5, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08112138
	add r0, r5, #0
	mov r1, #106
	bl sub_080CF018
_08112138:
	ldrb r0, [r4]
	cmp r0, #8
	bne _0811214A
	ldr r3, _08112208  @ =0x00000F62
	add r1, r7, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0811214A:
	ldr r1, _08112204  @ =0x00000F92
	add r0, r7, r1
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #9
	bne _0811215A
	mov r0, #0
	strb r0, [r6]
_0811215A:
	ldr r2, _0811220C  @ =0x00000F12
	add r0, r7, r2
	add r0, r5, r0
	mov r4, #0
	strb r4, [r0]
	ldr r3, _08112210  @ =0x00000F22
	add r0, r7, r3
	add r0, r5, r0
	strb r4, [r0]
	ldr r3, _08112214  @ =gUnknown_0817D738
	ldr r0, _08112218  @ =0x00000FB2
	add r2, r7, r0
	add r2, r5, r2
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r0, r1, #3
	add r0, r0, r1
	ldrb r1, [r6]
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r3, _0811221C  @ =0x000015ED
	add r0, r7, r3
	strb r1, [r0]
	ldr r3, _08112220  @ =gUnknown_0817D780
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r0, r1, #3
	add r0, r0, r1
	ldrb r1, [r6]
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r2, _08112224  @ =0x000015EC
	add r0, r7, r2
	strb r1, [r0]
	ldr r1, _08112228  @ =gUnknown_02010991
	mov r0, #8
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C3964
	ldr r3, _08112208  @ =0x00000F62
	add r0, r7, r3
	add r2, r5, r0
	ldr r1, _0811222C  @ =0x00000F72
	add r0, r7, r1
	add r0, r5, r0
	ldrb r1, [r2]
	ldrb r0, [r0]
	cmp r1, r0
	bne _081121F4
	mov r1, #16
	strb r4, [r2]
	strb r4, [r6]
	ldr r2, _08112230  @ =0x00000F52
	add r0, r7, r2
	add r0, r5, r0
	strb r4, [r0]
	add r3, r3, #96
	add r0, r7, r3
	add r0, r5, r0
	strb r1, [r0]
	ldr r0, _08112234  @ =gUnknown_02010990
	strb r4, [r0]
	add r0, r0, #3
	strb r4, [r0]
	ldr r0, _08112238  @ =0x00000EA5
	add r1, r7, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
_081121F4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081121FC:
	.4byte gRam
_08112200:
	.4byte 0x00000996
_08112204:
	.4byte 0x00000F92
_08112208:
	.4byte 0x00000F62
_0811220C:
	.4byte 0x00000F12
_08112210:
	.4byte 0x00000F22
_08112214:
	.4byte gUnknown_0817D738
_08112218:
	.4byte 0x00000FB2
_0811221C:
	.4byte 0x000015ED
_08112220:
	.4byte gUnknown_0817D780
_08112224:
	.4byte 0x000015EC
_08112228:
	.4byte gUnknown_02010991
_0811222C:
	.4byte 0x00000F72
_08112230:
	.4byte 0x00000F52
_08112234:
	.4byte gUnknown_02010990
_08112238:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_08112104

