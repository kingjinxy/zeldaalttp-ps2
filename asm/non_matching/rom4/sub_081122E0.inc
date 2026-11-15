	THUMB_FUNC_START sub_081122E0
sub_081122E0: @ 0x081122E0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _081123D0  @ =gRam
	ldr r2, _081123D4  @ =0x00000F92
	add r0, r1, r2
	add r3, r4, r0
	ldrb r2, [r3]
	cmp r2, #5
	beq _0811232A
	ldr r5, _081123D8  @ =0x00000996
	add r0, r1, r5
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08112316
	add r0, r2, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08112316
	add r0, r4, #0
	mov r1, #106
	bl sub_080CF018
_08112316:
	ldr r0, _081123D0  @ =gRam
	ldr r1, _081123D4  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #5
	bne _0811232A
	add r0, r4, #0
	bl sub_08111D48
_0811232A:
	ldr r5, _081123D0  @ =gRam
	ldr r2, _081123DC  @ =0x00000FC2
	add r0, r5, r2
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #15
	bhi _0811234A
	ldr r3, _081123E0  @ =0x00000F12
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	sub r2, r2, #160
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_0811234A:
	ldr r3, _081123E4  @ =gUnknown_0817D738
	ldr r1, _081123D4  @ =0x00000F92
	add r0, r5, r1
	add r6, r4, r0
	ldr r0, _081123E8  @ =0x00000FB2
	add r2, r5, r0
	add r2, r4, r2
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r0, r1, #3
	add r0, r0, r1
	ldrb r1, [r6]
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r3, _081123EC  @ =0x000015ED
	add r0, r5, r3
	strb r1, [r0]
	ldr r3, _081123F0  @ =gUnknown_0817D780
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r0, r1, #3
	add r0, r0, r1
	ldrb r1, [r6]
	add r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r1, [r0]
	ldr r2, _081123F4  @ =0x000015EC
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _081123F8  @ =gUnknown_02010991
	mov r0, #8
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C51C8
	ldrb r2, [r7]
	cmp r2, #0
	bne _081123CA
	mov r1, #16
	ldr r3, _081123FC  @ =0x00000F62
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	strb r2, [r6]
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	strb r2, [r0]
	strb r1, [r7]
	ldr r0, _08112400  @ =gUnknown_02010990
	strb r2, [r0]
	add r0, r0, #3
	strb r2, [r0]
	ldr r0, _08112404  @ =0x00000EA5
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
_081123CA:
	pop {r4-r7}
	pop {r0}
	bx r0
_081123D0:
	.4byte gRam
_081123D4:
	.4byte 0x00000F92
_081123D8:
	.4byte 0x00000996
_081123DC:
	.4byte 0x00000FC2
_081123E0:
	.4byte 0x00000F12
_081123E4:
	.4byte gUnknown_0817D738
_081123E8:
	.4byte 0x00000FB2
_081123EC:
	.4byte 0x000015ED
_081123F0:
	.4byte gUnknown_0817D780
_081123F4:
	.4byte 0x000015EC
_081123F8:
	.4byte gUnknown_02010991
_081123FC:
	.4byte 0x00000F62
_08112400:
	.4byte gUnknown_02010990
_08112404:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_081122E0

