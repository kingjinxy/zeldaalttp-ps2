	THUMB_FUNC_START sub_0809C6DC
sub_0809C6DC: @ 0x0809C6DC
	push {r4,lr}
	ldr r2, _0809C734  @ =gRam
	ldr r1, _0809C738  @ =0x00000545
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r3, _0809C73C  @ =0x00001727
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _0809C740  @ =0x000016CC
	add r4, r2, r1
	strb r0, [r4]
	add r3, r3, #127
	add r0, r2, r3
	ldrh r0, [r0]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r0
	ldr r0, _0809C744  @ =0x000002FF
	add r3, r2, #0
	cmp r1, r0
	bls _0809C7DC
	add r0, r0, #1
	cmp r1, r0
	bne _0809C764
	ldr r0, [r4]
	ldr r1, _0809C748  @ =0x00FFFF00
	and r0, r0, r1
	cmp r0, #0
	bne _0809C764
	ldr r4, _0809C74C  @ =0x000016D5
	add r0, r3, r4
	ldrb r0, [r0]
	lsr r1, r0, #1
	cmp r1, #1
	bls _0809C758
	ldr r0, _0809C750  @ =gUnknown_0816803C
	add r0, r1, r0
	ldrb r1, [r0]
	ldr r2, _0809C754  @ =0x000016CE
	add r0, r3, r2
	b _0809C762
	.byte 0x00
	.byte 0x00
_0809C734:
	.4byte gRam
_0809C738:
	.4byte 0x00000545
_0809C73C:
	.4byte 0x00001727
_0809C740:
	.4byte 0x000016CC
_0809C744:
	.4byte 0x000002FF
_0809C748:
	.4byte 0x00FFFF00
_0809C74C:
	.4byte 0x000016D5
_0809C750:
	.4byte gUnknown_0816803C
_0809C754:
	.4byte 0x000016CE
_0809C758:
	ldr r0, _0809C784  @ =gUnknown_0816803C
	add r0, r1, r0
	ldrb r1, [r0]
	ldr r4, _0809C788  @ =0x000016CD
	add r0, r3, r4
_0809C762:
	strb r1, [r0]
_0809C764:
	ldr r0, _0809C78C  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0809C7DC
	ldr r4, _0809C790  @ =0x000016CE
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _0809C794
	mov r0, #1
	b _0809C79A
_0809C784:
	.4byte gUnknown_0816803C
_0809C788:
	.4byte 0x000016CD
_0809C78C:
	.4byte 0x00001727
_0809C790:
	.4byte 0x000016CE
_0809C794:
	cmp r0, #0
	bge _0809C79E
	mov r0, #2
_0809C79A:
	orr r0, r0, r1
	strb r0, [r2]
_0809C79E:
	ldr r1, _0809C7B8  @ =0x000016CD
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _0809C7C0
	ldr r4, _0809C7BC  @ =0x00001727
	add r2, r3, r4
	ldrb r1, [r2]
	mov r0, #4
	b _0809C7CC
	.byte 0x00
	.byte 0x00
_0809C7B8:
	.4byte 0x000016CD
_0809C7BC:
	.4byte 0x00001727
_0809C7C0:
	cmp r0, #0
	bge _0809C7D0
	ldr r0, _0809C7E4  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #8
_0809C7CC:
	orr r0, r0, r1
	strb r0, [r2]
_0809C7D0:
	ldr r1, _0809C7E4  @ =0x00001727
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _0809C7E8  @ =0x000016CC
	add r0, r3, r2
	strb r1, [r0]
_0809C7DC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809C7E4:
	.4byte 0x00001727
_0809C7E8:
	.4byte 0x000016CC
	THUMB_FUNC_END sub_0809C6DC

