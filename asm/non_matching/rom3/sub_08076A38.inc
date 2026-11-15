	THUMB_FUNC_START sub_08076A38
sub_08076A38: @ 0x08076A38
	push {r4,lr}
	ldr r1, _08076BEC  @ =gRam
	ldr r2, _08076BF0  @ =0x00001670
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _08076BF4  @ =0x000009DA
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076BF8  @ =0x00001682
	add r0, r1, r4
	ldrh r2, [r0]
	sub r3, r3, #20
	add r0, r1, r3
	strh r2, [r0]
	mov r4, #171
	lsl r4, r4, #4
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08076BFC  @ =0x00001684
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _08076C00  @ =0x00000B74
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076C04  @ =0x00001686
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #10
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrh r2, [r0]
	ldr r3, _08076C08  @ =0x00000952
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076C0C  @ =0x00000A2C
	add r0, r1, r4
	strh r2, [r0]
	sub r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	sub r4, r4, #208
	add r0, r1, r4
	strh r2, [r0]
	add r3, r3, #222
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076C10  @ =0x00001696
	add r0, r1, r4
	ldrh r2, [r0]
	sub r3, r3, #214
	add r0, r1, r3
	strh r2, [r0]
	mov r4, #163
	lsl r4, r4, #4
	add r0, r1, r4
	strh r2, [r0]
	sub r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	sub r4, r4, #210
	add r0, r1, r4
	strh r2, [r0]
	add r3, r3, #220
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076C14  @ =0x00001698
	add r0, r1, r4
	ldrh r0, [r0]
	ldr r3, _08076C18  @ =0x00000B8C
	add r2, r1, r3
	strh r0, [r2]
	sub r0, r0, #2
	ldr r4, _08076C1C  @ =0x00000B8E
	add r2, r1, r4
	strh r0, [r2]
	ldr r2, _08076C20  @ =0x0000169A
	add r0, r1, r2
	ldrh r0, [r0]
	add r3, r3, #4
	add r2, r1, r3
	strh r0, [r2]
	sub r0, r0, #2
	add r4, r4, #4
	add r2, r1, r4
	strh r0, [r2]
	ldr r2, _08076C24  @ =0x0000169C
	add r0, r1, r2
	ldrh r0, [r0]
	add r3, r3, #16
	add r2, r1, r3
	strh r0, [r2]
	neg r0, r0
	add r4, r4, #16
	add r2, r1, r4
	strh r0, [r2]
	ldr r2, _08076C28  @ =0x0000169E
	add r0, r1, r2
	ldrh r0, [r0]
	add r3, r3, #4
	add r2, r1, r3
	strh r0, [r2]
	neg r0, r0
	add r4, r4, #4
	add r2, r1, r4
	strh r0, [r2]
	mov r2, #181
	lsl r2, r2, #5
	add r0, r1, r2
	ldrh r2, [r0]
	add r3, r3, #100
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076C2C  @ =0x000016A2
	add r0, r1, r4
	ldrh r2, [r0]
	add r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #142
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	ldrh r0, [r0]
	mov r2, #156
	lsl r2, r2, #4
	add r3, r1, r2
	strh r0, [r3]
	ldr r4, _08076C30  @ =0xFFFFFC00
	add r0, r0, r4
	mov r4, #248
	lsl r4, r4, #4
	add r2, r4, #0
	and r0, r0, r2
	ldr r4, _08076C34  @ =0x000009C4
	add r2, r1, r4
	lsr r0, r0, #7
	strh r0, [r2]
	ldrh r0, [r3]
	sub r0, r0, #16
	mov r2, #62
	and r0, r0, r2
	asr r0, r0, #1
	ldr r3, _08076C38  @ =0x000009C2
	add r2, r1, r3
	strh r0, [r2]
	ldr r4, _08076C3C  @ =0x000016AA
	add r0, r1, r4
	ldrh r2, [r0]
	ldr r3, _08076C40  @ =0x00000B54
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _08076C44  @ =0x000017AA
	add r1, r1, r4
	mov r0, #144
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_08076BEC:
	.4byte gRam
_08076BF0:
	.4byte 0x00001670
_08076BF4:
	.4byte 0x000009DA
_08076BF8:
	.4byte 0x00001682
_08076BFC:
	.4byte 0x00001684
_08076C00:
	.4byte 0x00000B74
_08076C04:
	.4byte 0x00001686
_08076C08:
	.4byte 0x00000952
_08076C0C:
	.4byte 0x00000A2C
_08076C10:
	.4byte 0x00001696
_08076C14:
	.4byte 0x00001698
_08076C18:
	.4byte 0x00000B8C
_08076C1C:
	.4byte 0x00000B8E
_08076C20:
	.4byte 0x0000169A
_08076C24:
	.4byte 0x0000169C
_08076C28:
	.4byte 0x0000169E
_08076C2C:
	.4byte 0x000016A2
_08076C30:
	.4byte 0xFFFFFC00
_08076C34:
	.4byte 0x000009C4
_08076C38:
	.4byte 0x000009C2
_08076C3C:
	.4byte 0x000016AA
_08076C40:
	.4byte 0x00000B54
_08076C44:
	.4byte 0x000017AA
	THUMB_FUNC_END sub_08076A38

