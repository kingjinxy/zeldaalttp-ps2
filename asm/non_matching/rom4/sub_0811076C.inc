	THUMB_FUNC_START sub_0811076C
sub_0811076C: @ 0x0811076C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
_08110772:
	add r0, r6, #0
	bl sub_08110700
	ldr r1, _081107C8  @ =gRam
	ldr r2, _081107CC  @ =0x00001062
	add r1, r1, r2
	add r1, r6, r1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #175
	bhi _081107DC
_0811078A:
	ldr r3, _081107C8  @ =gRam
	ldr r0, _081107D0  @ =0x00000EE2
	add r4, r3, r0
	add r4, r6, r4
	ldrb r1, [r4]
	add r0, r0, #32
	add r2, r3, r0
	add r2, r6, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r0, r0, #8
	add r1, r1, r0
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r1, _081107D4  @ =0x00000ED2
	add r2, r3, r1
	add r2, r6, r2
	ldrb r1, [r2]
	ldr r0, _081107D8  @ =0x00000EF2
	add r3, r3, r0
	add r3, r6, r3
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r0, r0, #8
	add r1, r1, r0
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
	b _08110772
	.byte 0x00
	.byte 0x00
_081107C8:
	.4byte gRam
_081107CC:
	.4byte 0x00001062
_081107D0:
	.4byte 0x00000EE2
_081107D4:
	.4byte 0x00000ED2
_081107D8:
	.4byte 0x00000EF2
_081107DC:
	ldr r7, _08110878  @ =gRam
	ldr r1, _0811087C  @ =0x00001062
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, #80
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #14
	bhi _0811078A
	ldr r0, _08110880  @ =0x00000EE2
	add r2, r7, r0
	add r2, r6, r2
	ldrb r3, [r2]
	mov r1, #248
	add r0, r1, #0
	and r0, r0, r3
	add r0, r0, #4
	mov r5, #0
	strb r0, [r2]
	ldr r2, _08110884  @ =0x00000ED2
	add r0, r7, r2
	add r0, r6, r0
	ldrb r2, [r0]
	and r1, r1, r2
	add r1, r1, #4
	strb r1, [r0]
	ldr r0, _08110888  @ =0x00001082
	add r1, r7, r0
	add r1, r6, r1
	ldr r2, _0811088C  @ =0x00000FB2
	add r4, r7, r2
	add r4, r6, r4
	ldrb r0, [r4]
	strb r0, [r1]
	add r0, r6, #0
	bl sub_08111070
	ldr r0, _08110890  @ =0x00000F22
	add r1, r7, r0
	add r1, r6, r1
	ldr r2, _08110894  @ =gUnknown_0817D484
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _08110898  @ =0x00000F12
	add r1, r7, r2
	add r1, r6, r1
	ldr r2, _0811089C  @ =gUnknown_0817D48B
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081108A0  @ =0x00001172
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081108A4  @ =0x00001783
	add r0, r7, r1
	strb r5, [r0]
	ldr r2, _081108A8  @ =0x000010E2
	add r0, r7, r2
	add r0, r6, r0
	mov r1, #14
	strb r1, [r0]
	ldr r0, _081108AC  @ =0x00000F92
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08110878:
	.4byte gRam
_0811087C:
	.4byte 0x00001062
_08110880:
	.4byte 0x00000EE2
_08110884:
	.4byte 0x00000ED2
_08110888:
	.4byte 0x00001082
_0811088C:
	.4byte 0x00000FB2
_08110890:
	.4byte 0x00000F22
_08110894:
	.4byte gUnknown_0817D484
_08110898:
	.4byte 0x00000F12
_0811089C:
	.4byte gUnknown_0817D48B
_081108A0:
	.4byte 0x00001172
_081108A4:
	.4byte 0x00001783
_081108A8:
	.4byte 0x000010E2
_081108AC:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_0811076C

