	THUMB_FUNC_START sub_0808CFE4
sub_0808CFE4: @ 0x0808CFE4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r8, r0
	ldr r3, _0808D0E8  @ =gRam
	ldr r2, _0808D0EC  @ =0x00000C8C
	add r0, r3, r2
	ldrh r2, [r0]
	mov r4, r8
	sub r2, r4, r2
	ldr r4, _0808D0F0  @ =0x00000C8A
	add r0, r3, r4
	ldrh r0, [r0]
	and r2, r2, r0
	mov r0, #240
	and r0, r0, r2
	asr r7, r0, #3
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r2
	lsl r0, r0, #3
	orr r7, r7, r0
	mov r0, #128
	lsl r0, r0, #1
	and r2, r2, r0
	lsl r2, r2, #2
	orr r7, r7, r2
	orr r7, r7, r1
	lsl r1, r7, #1
	ldr r2, _0808D0F4  @ =gUnknown_02018000
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r4, _0808D0F8  @ =0x000016B6
	add r0, r3, r4
	strh r2, [r0]
	ldr r2, _0808D0FC  @ =gUnknown_02018002
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r3, r4
	strh r2, [r0]
	ldr r2, _0808D100  @ =gUnknown_02018040
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r3, r4
	strh r2, [r0]
	ldr r0, _0808D104  @ =gUnknown_02018042
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _0808D108  @ =0x000016BC
	add r0, r3, r2
	strh r1, [r0]
	ldr r4, _0808D10C  @ =0x00000968
	add r0, r3, r4
	strh r7, [r0]
	ldr r0, _0808D110  @ =0x00001663
	add r3, r3, r0
	ldrb r0, [r3]
	cmp r0, #13
	beq _0808D134
	ldr r6, _0808D114  @ =0x0000371C
	mov r5, #2
	mov r0, #216
	bl sub_0808C148
	cmp r0, #1
	beq _0808D08C
	add r6, r6, #4
	mov r5, #4
	ldr r0, _0808D118  @ =0x00001CA8
	bl sub_0808C148
	cmp r0, #1
	beq _0808D08C
	sub r6, r6, #12
	mov r5, #3
	ldr r0, _0808D11C  @ =0x00000DF8
	bl sub_0808C148
	cmp r0, #0
	beq _0808D134
_0808D08C:
	ldr r4, _0808D0E8  @ =gRam
	ldr r1, _0808D120  @ =0x00000974
	add r1, r1, r4
	mov r9, r1
	strh r5, [r1]
	ldr r2, _0808D124  @ =0x0000097C
	add r5, r4, r2
	strh r6, [r5]
	ldr r3, _0808D10C  @ =0x00000968
	add r0, r4, r3
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl sub_080925A4
	bl sub_0813386C
	ldr r2, _0808D128  @ =0x0000096C
	add r0, r4, r2
	strh r7, [r0]
	mov r3, #0
	ldrsh r0, [r5, r3]
	bl sub_0808C1B4
	mov r1, #8
	neg r1, r1
	add r0, r1, #0
	mov r2, r8
	and r2, r2, r0
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strh r2, [r0]
	mov r1, #179
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r0, _0808D12C  @ =0x0000FFF8
	and r0, r0, r1
	ldr r2, _0808D130  @ =0x00000964
	add r4, r4, r2
	strh r0, [r4]
	mov r3, r9
	ldrb r0, [r3]
	bl Sprite_SpawnImmediatelySmashedTerrain
	b _0808D202
_0808D0E8:
	.4byte gRam
_0808D0EC:
	.4byte 0x00000C8C
_0808D0F0:
	.4byte 0x00000C8A
_0808D0F4:
	.4byte gUnknown_02018000
_0808D0F8:
	.4byte 0x000016B6
_0808D0FC:
	.4byte gUnknown_02018002
_0808D100:
	.4byte gUnknown_02018040
_0808D104:
	.4byte gUnknown_02018042
_0808D108:
	.4byte 0x000016BC
_0808D10C:
	.4byte 0x00000968
_0808D110:
	.4byte 0x00001663
_0808D114:
	.4byte 0x0000371C
_0808D118:
	.4byte 0x00001CA8
_0808D11C:
	.4byte 0x00000DF8
_0808D120:
	.4byte 0x00000974
_0808D124:
	.4byte 0x0000097C
_0808D128:
	.4byte 0x0000096C
_0808D12C:
	.4byte 0x0000FFF8
_0808D130:
	.4byte 0x00000964
_0808D134:
	ldr r4, _0808D210  @ =gRam
	mov r8, r4
	ldr r0, _0808D214  @ =0x00000968
	add r0, r0, r8
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl sub_080925A4
	bl sub_0813386C
	ldr r2, _0808D218  @ =0x0000097C
	add r2, r2, r8
	mov r9, r2
	mov r3, #0
	ldrsh r5, [r2, r3]
	ldr r0, _0808D21C  @ =0x000036D0
	cmp r5, r0
	bne _0808D202
	ldr r4, _0808D220  @ =0x0000096C
	add r4, r4, r8
	mov r0, #0
	mov r10, r0
	strh r7, [r4]
	mov r1, #0
	ldrsh r0, [r4, r1]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	bl sub_0809260C
	add r0, r5, #0
	bl sub_0808B8B8
	add r0, r7, #2
	strh r0, [r4]
	ldr r5, _0808D224  @ =0x000036D4
	mov r2, #0
	ldrsh r0, [r4, r2]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	bl sub_0809260C
	mov r3, #0
	ldrsh r0, [r4, r3]
	lsl r0, r0, #1
	ldr r1, _0808D228  @ =gUnknown_02018000
	add r0, r0, r1
	ldr r2, _0808D22C  @ =gUnknown_08155B4E
	ldr r3, _0808D230  @ =0x00006DA8
	add r1, r2, r3
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r4, r1]
	lsl r0, r0, #1
	ldr r3, _0808D234  @ =gUnknown_02018002
	add r0, r0, r3
	ldr r3, _0808D238  @ =0x00006DAA
	add r1, r2, r3
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r4, r1]
	lsl r0, r0, #1
	ldr r3, _0808D23C  @ =gUnknown_02018040
	add r0, r0, r3
	ldr r3, _0808D240  @ =0x00006DAC
	add r1, r2, r3
	ldrh r1, [r1]
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r4, r1]
	lsl r0, r0, #1
	ldr r3, _0808D244  @ =gUnknown_02018042
	add r0, r0, r3
	ldr r1, _0808D248  @ =0x00006DAE
	add r2, r2, r1
	ldrh r1, [r2]
	strh r1, [r0]
	mov r2, #0
	ldrsh r0, [r4, r2]
	bl sub_080925A4
	add r1, r0, #0
	add r0, r5, #0
	mov r2, #0
	bl sub_0808B624
	mov r4, r10
	mov r3, r9
	strh r4, [r3]
	ldr r0, _0808D24C  @ =0x000009C6
	add r0, r0, r8
	ldrh r1, [r0]
	ldr r0, _0808D250  @ =gUnknown_02002280
	add r1, r1, r0
	ldrb r0, [r1]
	mov r2, #2
	orr r0, r0, r2
	strb r0, [r1]
_0808D202:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0808D210:
	.4byte gRam
_0808D214:
	.4byte 0x00000968
_0808D218:
	.4byte 0x0000097C
_0808D21C:
	.4byte 0x000036D0
_0808D220:
	.4byte 0x0000096C
_0808D224:
	.4byte 0x000036D4
_0808D228:
	.4byte gUnknown_02018000
_0808D22C:
	.4byte gUnknown_08155B4E
_0808D230:
	.4byte 0x00006DA8
_0808D234:
	.4byte gUnknown_02018002
_0808D238:
	.4byte 0x00006DAA
_0808D23C:
	.4byte gUnknown_02018040
_0808D240:
	.4byte 0x00006DAC
_0808D244:
	.4byte gUnknown_02018042
_0808D248:
	.4byte 0x00006DAE
_0808D24C:
	.4byte 0x000009C6
_0808D250:
	.4byte gUnknown_02002280
	THUMB_FUNC_END sub_0808CFE4

